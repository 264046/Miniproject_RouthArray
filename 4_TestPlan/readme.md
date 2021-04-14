# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if pointers are initilaised correctly|  Pointer declarations|NULL pointer|Pointers with NULL values|Technical|
|  H_02       |Inputting coefficients should give routh array and result|Coefficients of characterisitc matrix|Routh array and result|Success|Requirement based    |
|  H_03       |Memory should be freed when program shuts down|  Pointers|No memory leaks|Success|Technical|

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Check if Routh array is initiliased correctly with input values|Coefficients of characteristic equation|Routh array with first 2 rows filled|Success|Requirement based |
|  L_02       |Initialised Routh array used to complete remaining rows till the end or if 0 is encountered|Pointer to initiliased array|Completed routh array, till a 0 or last row|Success|Requirement based|
|  L_03       |Auxiliary equation method used on array with row of zeros |Array with last row of zeros|Array with last row of non zeros|Success|Scenario based|
|  L_04      |Array with last row having first element 0 should be declared unstable|Array with last row having first element 0|Give result as UNSTABLE|Success|Boundary based|
|  L_05     |Sign changes in first comlumn of Routh array should be counted correctly|Completed Routh array|Number of sgin changes|Success|Requirement based|