# Probability Term Project
### Problem 1
* **Description**:  
    Every time you open a pack of M chocolate, there is a card numbered $1,2,3,4,5,$ or $6$. Each of the six numbers is equally likely to be the number on the card, and numbers are independent from pack to pack. $\text{X}$ is the total number of packs that you have collected all the six numbers. Please write a program in C/C++ to verify $\text{E[X]} = 14.7$.
### Problem 2
* **Description**:  
    A coin, having probability $p$ of landing heads, is continually flipped until at least two heads and at least three tails have been flipped. $\text{X}$ is the number of flips needed. Please write a program in C/C++ to find $\text{E[X]}$ for $p = 0.4,0.4325603,0.45$.  
    Verify the minimum of ${\text{E[X]}}$ occurs at $p = 0.4325603$.
### Problem 3
* **Description**:  
    Write a program to create a Possion random variable $\text{X}$ with parameter $\alpha = 7.5$.  
    Poisson: inter-arrival times are iid exponential random variables.  
    Arrival rate $\lambda$; i.e. exponential random variables with mean $\dfrac{1}{\lambda}$  
    $\alpha = \lambda T$, $T$ = the total interval. Let $\lambda = 1, T = 7.5$.  
    $\begin{aligned}
        \text{(-log(1.0 - rand()/(\text{RAND\_MAX}+1.0)) -}\\
        \text{log(1.0 - rand()/(\text{RAND\_MAX}+1.0)) -}\\
        \text{log(1.0 - rand()/(\text{RAND\_MAX}+1.0))...)}
    \end{aligned}$  
    until the sum is greater than $T = 7.5$.  
    $\text{X}$ = the number of the arrivals during the interval $T$. Plot the $\text{PMF}$ $P_X(x)$ and the simulation reslt of $\text{X}$ for $x = 0,1,...,20$.
### Problem 4
* **Description**:  
    $U_1,U_2,...,U_{12}(\text{rand()/(RAND\_MAX/8.0) - 4.0})$ are iid uniform random variables with the $\text{PDF}$  
    $$f_U(u) = 
    \left\{
        \begin{array}{l}
            \frac{1}{8}\quad -4\le v\le 4\\
            0\quad \text{otherwise}
        \end{array}
    \right.
    $$
    $\text{E[U]} = 0$ and $\text{Var[U]} = \dfrac{64}{12}$. $Y = U_1 + U_2 + ... + U_{12}$. By $\text{CLT}$, $Y$ is close to $\text{Gaussian(0,8)}$. Write a program in C/C++ to find the $\text{PDF}$ $f_Y(y)$. Plot $f_Y(y)$ and the $\text{PDF}$ of $X\sim \text{Gaussian(0,8)}$ on $[-35,35]$ in one single figure with $\text{MATLAB}$. Specify the curves.