// import { useState } from "react";
import './FilterExpense.css'

const FilterExpense = (props) => {
    let ra = [];
    for (let i = 0; i < props.expense_array.length; i++) {
        // console.log(props.expense_array[i].date);
        ra.push(
            props.expense_array[i].date.toLocaleString('en-US', {
                year: 'numeric',
            })
        );
    }
    let years = [...new Set(ra)];

	return (
		<div className='filtering-container'>
            <div>Filter By</div>
			<select className="filter-container__dropdown">
                <option value="">Select a Year</option>
                {years.map((available_year) => <option  key={available_year} value={available_year}>{available_year}</option>)}
            </select>
		</div>
	);
};

export default FilterExpense;
