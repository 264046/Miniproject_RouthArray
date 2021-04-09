# Requirements
## Introduction
 Given a system which has an equation of the form P(s)/Q(s) where P(s) and Q(s) are polynomials of any degree, it is said to be stable if all the roots of the polynomial Q(s) are in the left half of the complex plane, which means the real part of the root is negative.  
 
 For polynomials Q(s) of degrees higher than 2, the **Routh–Hurwitz** theorem can be useful to determine whether the system is stable or not.

## Research
### Importance of Stability
A system is said to be stable, if its output is under control. Otherwise, it is said to be unstable. A stable system produces a bounded output for a given bounded input.

![Response of a stable system](.\research_stablesystemgraph.jfif)

It is an important characteristic of a system and has a large influence on the system's performance. Thus, ensuring the stability of a system is essential to guarantee good performance.

### Advantages of Routh-Hurwitz Criterion
* Stability can be determined without solving the equation.
* Relative stability can be easily determined.

## Cost and Features
![Description](Link to Pic)
-- Content 
## Defining Our System
    -- TBD
## SWOT ANALYSIS
![SWOT Analysis](.\SWOT_Analysis.jpg)

# 4W&#39;s and 1&#39;H

## Who:

Students/engineers working with control systems will find this project useful.

## What:

Helps to quickly check stability of a system which otherwise can be a lengthy process involving multiple calculations.

## When:

Determining stability comes early in a control system design flow, once the controllable variables have been identified and a system has been modelled.

## Where:

Can be used in any field where output has to be controlled, i.e., a control system is required. Examples include robotics, vehicles and machinery.

## How:

The characteristic equation of the system is required. Once the coefficients are entered, the program gives output as 
```c 
STABLE
``` 
or 
```c 
UNSTABLE
```

# Detail requirements
## High Level Requirements: 
ID | Description | Status (Implemented/Future)
----|------------------------------------|----------------
`HL01`|User can enter coefficients of characteristic equation |Implemented

##  Low level Requirements:
ID | Description | Status (Implemented/Future)
----|------------------------------------|----------------
`LL01`|
