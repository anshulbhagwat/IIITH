
#### Various Fourier Series and Transforms

| Name | Synthesis                                                                                                | Analysis                                                                                                                                                             |
| ---- | -------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| TFS  | $$f(t) = a_0\sum_{n=1}^\infty(a_n\cdot\cos(n\cdot\omega_0\cdot t)+b_n\cdot\sin(n\cdot\omega_0\cdot t))$$ | $$a_0=\frac 1\tau \int_{t_0}^{t_0+\tau} f(t)dt,$$ $$a_n = \frac 2\tau \int_{t_0}^{t_0+\tau} f(t)sin(t)dt,$$ $$b_n = \frac 2\tau \int_{t_0}^{t_0+\tau} f(t)cos(t)dt$$ |
| CEFS | $$f(t)= \sum_{-\infty}^\infty F_n\cdot e^{j\cdot n\cdot \omega_0\cdot t}$$                               | $$F_n =\frac 1\tau\int_{t_0}^{t_0+\tau} f(t)\cdot e^{-j\cdot n\cdot \omega_0\cdot t}dt$$                                                                             |
| FT   | $$x(t) = \frac1{2\pi}\int_{-\infty}^\infty X(\omega)e^{j\omega t} d\omega$$                              | $$X(\omega)=\int _{-\infty}^{\infty}X(t)e^{-j\omega t}dt$$                                                                                                           |
| DTFT | $$x(t) = \frac1{2\pi}\int_{0}^{2\pi}X(e^{j\omega})e^{j\omega n} d\omega$$                                | $$X(e^{j\omega})=\sum _{n=-\infty}^{\infty}x(n)e^{-j\omega n}$$                                                                                                      |
| DFT  | $$x(n)=\frac1N\sum _{k=0}^{N-1}X(k)e^{j\frac{2\pi}N nk }$$                                               | $$X(K)=\sum _{n=0}^{N-1}x(n)e^{-j\frac{2\pi}N nK }dt$$                                                                                                               |


**Transform**
There are two steps in transforming a continuous (analog) signal into a digital signal.
1. Sampling: recording amplitude every 'x' seconds
2. Quantization: for each recorded amplitude, take it from a continuous to a digital value. That is, for the whole range of frequency (from min to max), convert it into ranges which each have a a single digital value.

**Sampling Theorem**
The frequency of sampling $f_s$ (*Nyquist Rate*) should be at least twice the maximum frequency $f_m$.
$$f_s\ge2\cdot f_m$$

**Quantization**
number of quantization intervals $=2^N$ for $N$ bits per sample.
Step size = input range / $2^N$ $=\Delta$
bit rate $= f_s \cdot N = N \cdot 2^N$
quantization error $= e(t) = x(t) - x_q(t)$
max quantization error = $\frac\Delta 2$


**Dirichlet Conditions**
The Dirichlet Conditions state the requirements for being able to express any periodic signal as a Fourier Series, that is as a weighted sum of sines and cosines.

Consider a periodic signal $f(t)$ that with Time Period $\tau = t_2-t_1$. 
1. $f(t)$ should be single valued between $t_1$ and $t_2$.
2. $f(t)$ should have a finite number of discontinuities between $t_1$ and $t_2$.
3. $f(t)$ should have a finite number of minima and maxima between $t_1$ and $t_2$.
4. $f(t)$ should be integrable between $t_1$ and $t_2$.

**Odd Functions**
$$f(x) = f(-x)$$

**Even Functions**
$$f(x) = - f(-x)$$

**Odd Component**
$$\frac {x[n] +x[-n]} 2$$
**Even Component**
$$\frac {x[n] - x[-n]} 2$$

**Periodicity**
If $\exists T$ such that $\forall n$ $$x[n+T] = x[n],$$ then $x[n]$ is said to be *periodic* with time period $T.$
The smallest real value $T$ with which $x[n]$ is periodic is called the *fundamental period* of $x[n]$.

**Some Common Integrals**

| Function        | Integral                        |
| --------------- | ------------------------------- |
| $\cos \alpha x$ | $\frac 1 \alpha \sin \alpha x$  |
| $\sin \alpha x$ | $-\frac 1 \alpha \cos \alpha x$ |


Let $\hat X_n = A_n + jB_n$
Then it's real and imaginary coefficients respectively are 
$\Re = A_n$
$\Im = B_n$
Its magnitude is given by
$|\hat X_n | = \sqrt{A_n^2 + B_n^2}$
and its phase is given by 
$\phi(n) = \tan ^{-1} {(\frac {B_n}{A_n})} = \angle(\hat X_n)$

**Energy**
$$E = \sum_{n=-\infty}^{\infty}{|x[n]|}^2$$
**Power**
$$P = \lim _{N\rightarrow\infty}\frac 1 {2N+1}\sum_{n=-N}^{N}{|x[n]|}^2 $$

**Energy Signal**
$$E<\infty, P = 0$$

**Power Signal**
$$E = \infty, P <\infty$$

**Delta-Dirac Function and Properties**
$$\delta(t) = \begin {cases} 1 & \text{if} \space t = 0 \\ 0 & \text  {otherwise}\end{cases}$$
**Sifting Property**
$$\int _{-\infty}^{\infty} f(t)\delta(t-\alpha) dt = f(\alpha)$$
**Unit Step Function**
$$u(t) = \begin{cases}1& t\ge 0\\0 & \text{otherwise}\end{cases}$$

**Duality Principle**
$$f(t) : F(\omega)\implies F(t) : 2\pi f(-\omega)$$

Fourier Transform of $\frac 1 t$ is the signum function.


**Parseval's Theorem**
$$\int_{-\infty}^{\infty}{|x(t)|}^2 = \frac 1 {2\pi}\int_{-\infty}^{\infty}{|X(\omega)|}^2d\omega$$
(The total energy in time domain is the same as the total energy in frequency domain. (Energy is preserved.))
**Square wave**
$$f(x) = \frac 4 \pi \sum_{n=0}^\infty \frac {\sin((2n+1)x)}{2n+1}$$
$f(\frac \pi 2) = 1$
gives 
$\frac \pi 4 = 1 - \frac 13 + \frac 15 - \frac 17 \ldots$

**Piecewise Linear**
$$f(x) = \frac \pi4 + 2 \sum_{n=1}^{\infty} \frac{\cos (nx)({(-1)}^n - 1)}{n^2 \pi} - \frac {\sin (nx){(-1)}^n}{n} $$
$f(0) = 0$
gives
$\frac {\pi^2}{8} = 1 + \frac 1{3^2} + \frac 1{5^2} +\ldots$

**Properties of Fourier Transforms**
1. Linearity$$y[n] = a_1x_1[n] + a_2 x_2[n] : Y[k] = a_1 X_1[k]  + a_2 X_2[k]$$
2. Symmetry$$X[k] = X^*[N-k]$$
3. Duality$$x[n] : X[k] \implies X[n] : 2\pi x[-k]$$
4. Time Shifting$$x[n-n_0] : X[k] \cdot e^{-j\frac{2\pi}{N}kn_0}$$
5. Time Scaling$$x[an]: \frac 1aX(e^{-\frac {-j\omega}a})$$
	1. Expansion$$X_E[k] = X[k \mod N] $$
	2. Decimation $$X_D$$
6. Frequency Shifting$$x[n]\cdot e^{-j\frac{2\pi}{N}k_0n} : X[k-k_0] $$
7. Time Reversal$$x[-n \mod N] = X[-k \mod N]$$
8. Circular Convolution$$x[n]\cdot h[n]: \frac 1 N X[k]\circledast H[n]$$
9. Multiplication$$x[n]\circledast h[n]:  X[k]\cdot H[n]$$
10. Parseval's Theorem

$$\sum _{n=0}^{\infty} r^n = \frac 1{1-r} , |r| < 1$$
$$\sum _{n=0}^{N} r^n = \frac {1-r^{N+1}}{1-r} , r \ne 1$$


$\cos ^3 \omega = \frac 14(\cos 3\omega + 3 \cos \omega)$
$\cos ^2 \omega = \frac 1 2 (1+ cos 2\omega)$

$\text {IDTFT}(\alpha \cos k \omega) = \alpha \delta (n - k)$

$$\cos\alpha\cos\beta = \frac{\cos(\alpha +\beta)+\cos(\alpha- \beta)}2$$

**Linear Convolution**
$$x_1[n]\ast x_2[n] =\sum_{k=-\infty}^{\infty}x_1[k]x_2[n-k]$$
**Circular Convolution**
$$x_1[n]\circledast x_2[n] =\sum_{k=0}^{N-1}x_1[k]x_2[n-k \mod N]$$

**Z-Transform**

| Condition  | ROC                                                 |
| ---------- | --------------------------------------------------- |
| causal     | $$\|z\|> \max (\text{poles})$$                      |
| anticausal | $$\|z\|> \min (\text{poles})$$                      |
| two sided  | $$\min (\text{poles})< \|z\| < \max(\text{poles})$$ |
| stable     | $$1\subseteq \|z\|$$                                |
| unstable   | $$1\nsubseteq\|z\|$$                                |


**LTI Systems**
$$y[n] = x[n]\ast h[n]$$
The output equation of a system is given by the convolution of the input with the impulse response. 
The impulse response $h[n]$ is the output when the input is the impulse $\delta [n]$

Causal LTI systems can be represented by the general equation:
$$y[n] = \sum_{k = 0}^{N}a_k x[n-k] - \sum_{k=0}^{M} b_k y[n-k]$$
Taking the $z$ transform on both sides, we get
$$Y(z) = \sum_{k = 0}^{N}a_k z^{-k}X(z) - \sum_{k=0}^{M} b_k z^{-k}Y(z)$$

$$Y(z)(1+ \sum_{k=0}^{M} b_k z^{-k}) = X(z)\sum_{k = 0}^{N}a_k z^{-k}$$
Thus, the system equation $H(z)$ is given by
$$H(z) = \frac {Y(z)}{X(z)} = \frac{\sum_{k = 0}^{N}a_k z^{-k}}{1+ \sum_{k=0}^{M} b_k z^{-k}}$$
Now in this form
1. $a_0 = 1, \space a_k = 0, \space \forall k \ge 1$: All Pole System
2. $b_k = 0, \space \forall k \ge 1$: All Zeroes System
3. Something else: Pole-Zero System
# **Butterfly FFT**
1. Decimation in Frequency![[Pasted image 20250225022309.png]]
2. Decimation in Time![[Pasted image 20250225022218.png]]

**Desirable Properties for Systems**
1. Time Invariance$$T\{x[n-n_0]\} =y[n-n_0] \space\forall n_0 $$To show whether or not a system is time invariant, get the response for the shifted signal $y'[n]=T\{x'[n]\},$ by first simplifying $x'[n] = x[n-n_0]$ and then verify whether $y'[n] = y[n-n_0]$. Basically, if any input or output is multiplied by any function of $n$ then it is not time invariant.
2. Linearity$$T\{a_x[n] +bx_2[n]\} = ay_1[n] + by_2[n] $$ Again, take $y'[n] = T\{a_x[n] +bx_2[n]\}$ and check whether that is equal to $ay_1[n] + by_2[n]$ Basically if any of the inputs or outputs are exponentiated to any number other than 1. (Even constants are not allowed for linearity, since that is exponent of 0 with the input/ output.)
 
3. Causality: If it cannot be rearranged in such a way that the $y[n]$ does not depend on any future inputs.

**Steps for Filter Design**
1. Identify the desired system equation $H_d(z)$
2. Take the inverse $z$ transform to get the desired impulse response $h_d[n]$
3. Calculate its values from $-\frac N2$ to $+\frac N2$ to ensure symmetry
4. Multiply it with the desired window to get the actual impulse response $h[n] = h_d[n-\frac N2]\cdot w[n], \space n\in{0, 1, \ldots, N}$
5. Calculate the $z$ transform to get the actual system equation $H(z)$.
6. Implement the appropriate realisation for the designed filter.
Note: Instead of doing $n-\frac N2$ in step 3, which is done to ensure causality, one can multiply $H(z)$ with $z^{-\frac N 2}$
**Examples of windows**
1. $w[n] = 1$  *Rectangular Window*
2. $w[n] = 0.54 - 0.46 cos \frac{\pi n}4$ *Hamming Window*
**Components of Filter Realisation**
1. Adder
2. Multiplier
3. Delay Element $z^{-1}$
**Order of Filter Realisation**
$$=\text{number of delay elements required}$$
**Forms of Filter Design**
1. DF 1: Order = $N+M$
2. DF 2: Order = $\max (N,M)$
3. Cascade: $H(z) = H_1(z)\cdot H_2(z)$ then cascade the output of system $H_1$ into system $H_2$
4. Parallel: $H(z) = H_1(z) + H_2(z)$ then parallel feed the input into both and add the output from both
![[Pasted image 20250224225250.png]]
**Speech Production**
