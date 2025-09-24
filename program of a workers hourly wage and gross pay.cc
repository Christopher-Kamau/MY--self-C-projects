def calculate_pay():
    # Get user input for hours worked and hourly wage
    hours_worked = float(input("Enter the number of hours worked in a week: "))
    hourly_wage = float(input("Enter your hourly wage: "))
    
    # Calculate the gross pay, considering overtime
    if hours_worked > 40:
        regular_hours = 40
        overtime_hours = hours_worked - 40
        gross_pay = (regular_hours * hourly_wage) + (overtime_hours * hourly_wage * 1.5)
    else:
        regular_hours = hours_worked
        overtime_hours = 0
        gross_pay = regular_hours * hourly_wage
    
    # Tax calculation
    if gross_pay <= 600:
        tax = gross_pay * 0.15  # 15% tax rate
    else:
        tax = 600 * 0.15 + (gross_pay - 600) * 0.20  # 15% for first $600, 20% for the rest
    
    # Net pay is the gross pay minus taxes
    net_pay = gross_pay - tax
    
    # Print results
    print(f"\nGross Pay: ${gross_pay:.2f}")
    print(f"Overtime Hours: {overtime_hours:.2f} hours" if overtime_hours > 0 else "No overtime hours.")
    print(f"Taxes: ${tax:.2f}")
    print(f"Net Pay: ${net_pay:.2f}")

# Run the function
calculate_pay()
