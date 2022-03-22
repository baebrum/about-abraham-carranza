import ExpenseForm from "./ExpenseForm";
import './ExpenseForm.css'



const AddExpense = (props) => {
    const storeExpenseData = (ExpenseData) => {
        const expense_data = {
			...ExpenseData,
            id: Math.random().toString()
		};
        props.onAddExpense(expense_data);
    }
    return (
        <div>
            <ExpenseForm enteredExpensedData={storeExpenseData}></ExpenseForm>
        </div>
    )
};

export default AddExpense