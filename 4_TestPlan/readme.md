# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Head Value NULL even after adding items |  NULL | -2 | -2 |Requirement based |
|  H_02       |Correct amount value of the order list of user|  2(50)+100  |200 |200|Scenario based    |
|  H_03       |Return -2 if operation are performed on NULL value| NULL |-2|-2|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Username and password in login do not matches with username password at registeration| differnt string values of usernames and password |Incorrect Username or Password|Incorrect Username Password|Requirement based |
|  L_02       |Printing empty food list with head pointer being NULL| NULL |-2|-2|Scenario based    |
|  L_03       |Adding items in the list Insert Node funtionality | Node Data |SUCCESS|SUCCESS|Scenario based    |
