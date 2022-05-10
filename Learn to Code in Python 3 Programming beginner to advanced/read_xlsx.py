import pandas as pd
xfile = pd.ExcelFile("sales.xlsx")

print (xfile.sheet_names)

sheet = xfile.parse('sales')

print(sheet)

print(sheet.Date)
# geting the sum of toal column
print(sheet.Amount.sum())
# loc is used to filter cell data of excel
print(sheet.loc[0])

print(sheet.loc[0, "Amount"])

print(sheet.set_index("Customer", inplace=True))

print(sheet.loc["MMC Inc."])

sheet = sheet.reset_index()

print(sheet["Invoice"])

print(sheet.loc[sheet["Invoice"]==99])

print(sheet.loc[sheet["Amount"].idxmax()])

for i in sheet.loc[sheet["Amount"]>1800]["Customer"].unique():
    print(i)

