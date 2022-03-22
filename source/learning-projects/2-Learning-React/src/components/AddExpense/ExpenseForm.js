import '../UI/Card.css';
import Card from '../UI/Card';
import './ExpenseForm.css';
import { useState } from 'react';

const ExpenseForm = (props) => {
	const titleChangeHandler = (event) => {
		// console.log(event.target.value);
		setTitleHandler(event.target.value);
	};
	const [title, setTitleHandler] = useState('');

	const dateChangeHandler = (event) => {
		// console.log(event.target.value);
		setDateHandler(event.target.value);
	};

	const [stored_date, setDateHandler] = useState('');

	const amountChangeHandler = (event) => {
		// console.log(event.target.value);
		setAmountHandler(event.target.value);
	};

	const [amount, setAmountHandler] = useState('');

	const submitHandler = (event) => {
		event.preventDefault();

		const expense_data = {
			title: title,
			date: new Date(stored_date),
			amount: amount,
		};
		props.enteredExpensedData(expense_data)
		setAmountHandler('');
		setDateHandler('');
		setTitleHandler('');
	};

	return (
		<form onSubmit={submitHandler}>
			<div className='box'>
				<Card className='form-Expense-Container'>
					<div className='form-expense__options'>
						<label>Title</label>
						<input
							className='form-expense__inputBox'
							type='text'
							onChange={titleChangeHandler}
							value={title}
							placeholder='Ex. Groceries'></input>
					</div>
					<div className='form-expense__options'>
						<label>Amount</label>
						<input
							className='form-expense__inputBox'
							type='number'
							inputMode='numeric'
							onChange={amountChangeHandler}
							value={amount}
							min='0.01'
							step='0.01'
							placeholder='0.00'></input>
					</div>
					<div className='form-expense__options'>
						<label>
							Date<span> MM/DD/YYYY</span>
						</label>
						<input
							className='form-expense__inputBox'
							type='date'
							onChange={dateChangeHandler}
							value={stored_date}></input>
					</div>
					<div className='form-expense__options'>
						<button className='form-expense__button'>Add Expense</button>
					</div>
				</Card>
			</div>
		</form>
	);
};
export default ExpenseForm;
