import './ExpenseItem.css';
import ExpenseItemDate from './Expense-Date/ExpenseItemDate';
import Card from '../UI/Card';
import {useState} from 'react'

function ExpenseItem(props) {
	const [title, set_title] = useState(props.title);

	const clickHandler = () =>{
		set_title("cheese");
	}

	return (
		<Card className='expense-item'>
			<ExpenseItemDate date={props.date}></ExpenseItemDate>
			<div className='expense-item__description'>
				<h2>{title}</h2>
				<Card className='expense-item__price'>${props.amount}</Card>
			</div>
			<button onClick={clickHandler}>Hello</button>
		</Card>
	);
}

export default ExpenseItem;
