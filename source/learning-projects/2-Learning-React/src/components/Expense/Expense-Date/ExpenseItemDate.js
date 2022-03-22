import './ExpenseItemDate.css';
import Card from '../../UI/Card';

function ExpenseItemDate(props) {
	const month = props.date.toLocaleString('en-US', { month: 'long' });
	const year = props.date.toLocaleString('en-US', { year: 'numeric' });
	const day = props.date.toLocaleString('en-US', { day: 'numeric' });
	return (
		<Card className='date-container'>
			<div>{month}</div>
			<div className='date-container__day'>{day}</div>
			<div>{year}</div>
		</Card>
	);
}
export default ExpenseItemDate;
