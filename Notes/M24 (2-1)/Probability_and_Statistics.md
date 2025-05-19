**Sample Space**
$\Omega$ is the sample space, points in which are outcomes. Events are sets of outcomes. That is, any subset of $\Omega$ is an event.

**Probability Measure**
$\mathbb  P$ is a measure of the probability of a set.
$\mathbb P (\phi) = 0$
$\mathbb P(\Omega) = 1$
For any $A\subseteq \Omega,$   $0\le \mathbb P (A) \le 1$
For any $i$ disjoint events $A_i\subset \mathcal F$

$$\mathbb P({\bigcup^\infty_{i=1}A_i}) = \sum^\infty_{i=1}\mathbb P (A_i)$$
In general, $\mathcal P(\Omega)$ is the domain, (for countable and finite sets).

**Sigma Algebra**  *Event Space*
Properties are thus:
1. $\phi \in \mathcal F$
2. $\Omega \in \mathcal F$
3. $\forall A_i \in \mathcal F,$     $\bigcup U_{\forall i} A_i\in \mathcal F$
4. $\forall B \in \mathcal F,$  $\overline B \in \mathcal F$

**Borel Sigma Algebra**
$\mathcal B([x,y]), x,y\in \mathbb R$ is given by all the sets of the form $(a,b), [a,b], (a,b]$ or $[a,b)$ where $x\le a\le b\le y$ 

**Probability Space**
The trio of a set of events, its associated sigma algebra, and their probability measure is known as a probability space $(\Omega, \mathcal F, \mathbb P)$

**Power Set**
The set of all subsets of a set is known as the power set, represented by $\mathcal P$
$|\mathcal P(\Omega)| =2^{|\Omega|}$ (for discrete sets)


**Probability Measure**
Is a function on the measurable space $(\Omega, \mathcal F),$ $$\mathbb P:\mathcal F\rightarrow [0,1]$$
If $\Omega = \mathbb R,$ then $\mathcal B(\mathbb R)$ is the Borel Sigma Algebra of Real numbers. 

**Probability Space**

| Discrete                                                                       | Continuous                                      |
| ------------------------------------------------------------------------------ | ----------------------------------------------- |
| $(\Omega, \mathcal F,\mathbb P)$                                               | $(\mathbb R, \mathcal B(\mathbb R), \mathbb P)$ |
| $$\mathbb P(\bigcup_{i=1}^\infty{A_i})\le \sum_{i=1}^\infty \mathbb P({A_i})$$ |                                                 |


**Chain Rule of Conditional Prob**
$$\mathbb P (A_1\cap A_2\cap A_3\ldots \cap A_n)=\mathbb P(A_1)\cdot \mathbb P(A_2\mid A_1)\cdot \ldots \mathbb P(A_n\mid A_1A_2\ldots A_{n-1})$$

**Law of Total Probability: Partitioning**
$$\mathbb P(A)=\sum_{i=1}^n \mathbb P(A\cap B_i)$$
for any partition $B_1, B_2\ldots, B_n$ of $\Omega$.

**Bayes Law**
$$\mathbb P(B_k\mid A) =\frac{\mathbb P(A\mid B_k)\cdot \mathbb P(B_k)}{\sum_{i=1}^n P(A\mid B_i)\cdot \mathbb P(B_i)}$$
for any partition $B_1, B_2\ldots, B_n$ of $\Omega$.


**Independent**
$P(A\cap B)=P(A)\cdot P(B)$
**Pairwise Independent**
$A_i$ and $A_j$ are each independent for any $i\neq j, i,j\in \{1,2,\ldots n\}.$
**Mutually Independent**
$P(A_1\cap A_2\cap\ldots\cap A_n)=\prod _{i=1}^n P(A_i)$
and this holds for any subset of $A_1, \dots A_n$ as well

Zero probability events are always independent.
**Conditional Independence**
$P(AB|C)=P(A|C)\cdot P(B|C)$


**Correlation**
If $A$ and $B$ are positively correlated, then so are their complements, but $A^C and B$ are negatively correlated. Likewise for the negative correlation.

$P(A\mid B)> P(A)$ is positive correlation.
$P(A\mid B)< P(A)$ is negative correlation.

**Principle of Counting**

|                         | Ordered | Unordered       |
| ----------------------- | ------- | --------------- |
| **With Replacement**    | $n^k$   | $^{n+k-1}C_{k}$ |
| **Without Replacement** | $^nP_k$ | $^nC_k$         |

**Random Variables**
We map $(\Omega, \mathcal F, \mathbb P)$ to a simpler $(\Omega ', \mathcal F', P_X)$
$P_X$ is called an induced probability measure on $\Omega '$


$X:\Omega\rightarrow\Omega'$ 
$X(\omega)\in\Omega', \forall \omega \in \Omega$

$P_X({B\in \mathcal F'})= \mathbb P(\{\omega\in \Omega: X(\omega)\in B\})$
This set is called the preimage of $B$ 
$X^{-1}(B)=\{\omega\in \Omega: X(\omega)\in B\}$

**Induced Probability Measure**

| Discrete                                         | Continuous |
| ------------------------------------------------ | ---------- |
| $P_X({B\in \mathcal F'})= \mathbb P(X^{-1}(B))$  |            |
| $X^{-1}(B)=\{\omega\in \Omega: X(\omega)\in B\}$ |            |

**Probability Mass Function**
$P_X$ is a set measure. $p_X$ acts on elements. 

**Cumulative Distribution Function**
It gives you the probability of the set of all elements lesser than some element in $X$.
It is non decreasing and right continuous.
$F_X(-\infty) = 0$
$F_X(\infty) = \sum _{x\in\Omega'}p_X(x)=\mathbb P(\Omega) = 1$

For discrete, $F_X$ is piecewise constant.
For continuous, it is continuous.

**Tail CDF**
$\overline F_X(x)=1-F_X(x)=P_X(X>x)$

**Probability Density Function**
Probability per unit length. Cognate to pmf, but for continuous rvs.
$f_X(x)= \frac{dF_X(x)}{dx}$
$F_X(x_1)= \int_{-\infty}^{x_1}f_X(x)dx$
$F_X(b)-F_X(a)=P_X(a\le X\le b)=\int_{a}^{b}f_X(x)dx$ 
$P_X(X=a)=0$
$P_X(B)=\int_{x\in B}f_X(x)dx$

**Expectation**
$E[X]=\sum_{x\in \Omega'} x\cdot p_X(x)$
$E[X]=\int_{-\infty}^{\infty}x\cdot f_X(x)dx$


**Nth Moment**
$E[X^n]=\sum_{x\in \Omega'} x^n\cdot p_X(x)$
$E[X^n]=\int_{-\infty}^{\infty}x^n\cdot f_X(x)dx$

**Expectation of a function of $X$** (*Law Of The Unconscious Statistician*)
$E[g(X)]=\sum_{x\in \Omega'} g(x)\cdot p_X(x)$
$E[g(X)]=\int_{-\infty}^{\infty}g(x)\cdot f_X(x)dx$

if $Y=g(X)$
then
$p_Y(y)= p_X(g^{-1}(y))$

**Linearity of Expectation**
$E[aX+b]=aE[X]+b$
holds for both discrete and continuous.
in addition, for continuous, if $Y=aX+b,$ 
$F_Y(y)=F_X(\frac{y-b}a), a\ge 0$
$F_Y(y)=1-F_X(\frac{y-b}a), a< 0$



**Variance**
$E[(X-E[X])^2]= E[X^2]-E[X]^2$


# **Discrete Random Variables**
1. Indicator $$1_A(\omega)=\begin{cases}    1& \omega\in A\\    0& \omega\notin A  \end{cases}$$ $$p_{1_A}(x)= \begin{cases} p=\mathbb P(A) & 1\\ 1-p & 0\end{cases}$$ $$E[1_A^n]=p$$ $$E[{(1_A-E[1_A])}^2]=p(1-p)$$ $$M_X(t) = p\cdot e^t + 1 -p$$ $$D_X = (-\infty, \infty)$$
2. Bernoulli $$X(\omega)=\begin{cases}    1& \text{with probability } p\\    0& \text{otherwise}  \end{cases}$$ $$p_X(x)= \begin{cases} p& 1\\ 1-p & 0\end{cases}$$ $$E[X^n]=p$$ $$E[{(X-E[X])}^2]=p(1-p)$$$$M_X(t) = p\cdot e^t + 1 -p$$ $$D_X = (-\infty, \infty)$$
3. Binomial  $$B(n,p), 0\le k<n$$ $$p_B(k)=^nC_k\cdot p^k\cdot (1-p)^{n-k}$$$$F_B(x)=\sum_{k=0}^{\lfloor x\rfloor}\space^nC_k\cdot p^k\cdot (1-p)^{n-k}$$$$E[B]=np$$ $$E[{(B-E[B])}^2]=np(1-p)$$$$M_X(t) = {(p\cdot e^t + 1 -p)}^n$$ $$D_X = (-\infty, \infty)$$
4. Geometric$$X(p)$$ $$p_X(k)=(1-p)^{k-1}\cdot p, k\ge 1$$$$F_X(x)={(1-p)}^{}\lfloor x\rfloor, x\ge 1$$$$E[X]=\frac 1p$$$$E[{(X-E[X])}^2]=\frac{(1-p)}{p^2}$$ $$M_X(t) = \frac {e^t}{1 - e^t\cdot (1-p)}$$ $$D_X = (-\infty, -ln(1-p))$$
5. Poisson $$X(\lambda), \Omega'=\mathbb Z_{\ge 0}$$ $$p_X(k)=e^{-\lambda}\cdot \frac{\lambda^k}{k!}, k\ge 0$$$$F_X(x)=\sum_{k=0}^{\lfloor x\rfloor}\space e^{-\lambda}\cdot \frac{\lambda^k}{k!}, x\ge 0$$
 $$E[X]=\lambda$$ $$E[{(X-E[X])}^2]=\lambda$$ $$M_X(t) = e^{\lambda (e^t-1)}$$ $$D_X= (-\infty, \infty)$$

# **Continuous Random Variables**
1. Uniform Random Variable$$U[a,b]$$ $$f_U(x)=\frac 1{b-a}, \forall x\in [a,b]$$ $$F_U(x)=\begin {cases}0 & x<a \\ \frac{x-a}{b-a}& x\in [a,b]\\ 1& x> b\end{cases}$$
$$E[U]=\frac {a+b}2$$ $$E[{(U-E[U])}^2]=\frac {{(b-a)}^2}{12}$$ $$M_X = \begin {cases}\frac{e^{ta}-e^{tb}}{t(b-a)} & t\neq 0 \\ 1& t =0\end{cases}$$ $$D_X = (-\infty, \infty)$$
2. Exponential Random Variable$$Exp(\lambda)$$ $$f_X(x)=\lambda e^{-\lambda x}, x\ge 0$$ $$F_X(x)=1-e^{-\lambda x}, x\ge 0$$
$$E[X]=\frac 1\lambda, E[X^n]=\frac {n!}{\lambda^n}$$ $$E[{(X-E[X])}^2]=\frac 1{\lambda^2}$$ $$M_X(t) = \frac{\lambda}{\lambda -t}$$ $$D_X = (-\infty, \lambda)$$
3. Gaussian Random Variable: It has two parameters: mean and variance.$$\mathcal N(\mu, \sigma ^ 2)$$ $$f_{\mathcal N}(x)=\frac 1{\sqrt {2\pi\sigma^2}}\cdot e^{-\frac 12\cdot{(\frac {x-\mu}\sigma)}^2}$$$$E[\mathcal N]=\mu$$ $$E[{(\mathcal N-E[\mathcal N])}^2]=\sigma^2$$ $$M_X(t) = e^{\mu t + \frac {\sigma^2 t^2}{2}}$$ $$D_X=(-\infty,\infty)$$
4. Standard Normal Random Variable: It is Gaussian with $\mu = 0, \sigma = 1.$$$\mathcal N(0, 1)$$ $$f_{\mathcal N}(x)=\frac 1{\sqrt {2\pi}}\cdot e^{-\frac 12\cdot x^2}$$ $$F_{\mathcal N}(x)=\Phi(x)=\frac 1{\sqrt {2\pi}}\cdot\int_{-\infty}^x e^{-\frac 12\cdot t^2}dt$$ $$\overline F_{\mathcal N}(x)=Q(x)= 1-\Phi(x)$$
$$E[\mathcal N]=0$$ $$E[{(\mathcal N-E[\mathcal N])}^2]=1$$ $$M_X(t) = e^{\frac{t^2}{2}}$$ $$D_X=(-\infty,\infty)$$

**Normality under Linear Transformations**
If $X\sim\mathcal N(\mu, \sigma^2),$ then any $Y=aX+b$ is also normal with $E[Y]=a\mu + b$ and $Var(Y)=a^2\sigma ^2.$

Now, if $X\sim\mathcal N(0,1),$ we can exploit this for any $Y\sim\mathcal N(\mu, \sigma^2),$ because $Y=\sigma X+\mu.$
$\implies X=\frac {Y-\mu}{\sigma}$
$\implies P(Y\le y)= P(X\le \frac {y-\mu}{\sigma})=\Phi(\frac {y-\mu}{\sigma})$
$\implies F_Y(y)=\Phi(\frac {y-\mu}{\sigma})$ 

**Central Limit Theorem**
For any $n$ independent but identically distributed random variables $X_i,$ their mean converges to a normal distribution regardless of the original distribution of $X_i$.
$$\frac 1n \sum_{i=1}^nX_i\sim \mathcal N(\mu, \frac{\sigma^2}n)$$
**Linear Transformations**
Let $Y=aX+b$

$p_y(y)=p_X(\frac {y-b}a)$ 
$f_Y(y)=\frac{dF_Y(y)}{dy}=\frac 1{|a|} f_X(\frac {y-b}a) = \begin{cases}\frac 1a f_X(\frac {y-b}a)&a>0\\\frac {-1}a f_X(\frac {y-b}a)&a<0\end{cases}$
$F_Y(y)=F_X(\frac{y-b}a), a>0$ 
$F_Y(y)=1-F_X(\frac{y-b}a), a<0$ 
$E[Y]=aE[X]+b$
$Var(Y)=a^2Var(X)$

**Functions of Random Variables**
$Y=g(X)$
Then

$p_y(y)=p_X(g^{-1}(y))$ 
$f_Y(y)=\frac{dF_Y(y)}{dy}=f_X(g^{-1}(y))\cdot |\frac {dh}{dy}(y)|$  (for monotone function $g(\cdot)$)
$F_Y(y)=F_X(g^{-1}(y))$ 
$E[Y]=E[g(X)]$
$Var(Y)=Var(g(X))$


**Mixed Random Variables**
$$F_Y(y)= C(y) + D(y)$$ where $C(y)$ is continuous and $D(y)$ is discrete.
$$E[Y]= \int _{-\infty}^{\infty}xc(x)dx+\sum_{y_k}y_kp_Y(y_k)$$

# **Joints**
**Joint PMF**\
$p_{XY}(x,y)= P_{XY}(X=x, Y=y)$
(The probability of both events happening.)



**Marginal PMF**
$$p_X(x)=\sum_yp_{XY}(x,y)$$ $$p_Y(y)=\sum_xp_{XY}(x,y)$$
*Proof*
$p_X(x)=\mathbb P(\{\omega\in \Omega: X(\omega)=x\})$
$=\mathbb P(\bigcup_y\{\omega\in \Omega: X(\omega)=x, Y(\omega) =y\})$
$=\sum_y\mathbb P(\{\omega\in \Omega: X(\omega)=x, Y(\omega) =y\})$
$=\sum_yp_{XY}(x,y)$

**Joint CDF**
$F_{XY}(x,y)=\mathbb P(\{\omega\in\Omega: X(\omega)\le x \text{ and } Y(\omega)\le y\})$
**Marginal CDF**
$F_X(x)=F_{XY}(x,\infty)$
$F_Y(y)=F_{XY}(\infty, y)$

**Joint PDF**
$f_{XY}(x,y)=\frac{\delta^2F_{XY}(x,y)}{\delta x\delta y}$
$F_{XY}(x,y)=\int_{-\infty}^x\int_{-\infty}^yf_{XY}(s,t)dsdt$

**Marginal PDF**
$f_X(x)=\int_{-\infty}^{\infty}f_{XY}(x,y)dy$
$f_Y(y)=\int_{-\infty}^{\infty}f_{XY}(x,y)dx$

**Joint Expectation**
$E[XY]=\sum_x\sum_yxy\cdot p_{XY}(x,y)$
$E[XY]=\int_{-\infty}^{\infty}\int_{-\infty}^{\infty}xy\cdot f_{XY}(x,y)dxdy$ 


**Independence**
$p_{XY}(x,y)=p_X(x)p_y(y)$ (or $f_{XY}(x,y)=f_X(x)f_y(y)$) 
and
$F_{XY}(x,y) = F_X(x)F_Y(y)$
and
$E[XY]=E[X]E[Y]$

**Functions of Joint Random Variables**
Let $Z=g(X,Y)$
$p_Z(z)=\sum_{\{x,y:g(x,y)=z\}}p_{XY}(x,y)$
$E[g(x,y)]=\sum_{xy}g(x,y)\cdot p_{XY}(x,y)$
$E[g(x,y)]=\int_{-\infty}^{\infty}\int_{-\infty}^{\infty}g(x,y)\cdot f_{XY}(x,y)dxdy$

**Covariance**
$Cov(X,Y)=E[(X-E[X])(Y-E[Y])]$
$=E[XY]-E[X]E[Y]$
$Cov=0\implies$ uncorrelated (independent?)



# **Conditioning Random Variables**

### **Conditioning on an Event**

**Conditional PMF**
For some $A\in \mathcal F,$
$p_{X\mid A}(x)=\frac {\mathbb P(\{X=x\}\cap A)}{\mathbb P(A)}$


For some $A\in\mathcal F',$
if $x\notin A\implies p_{X\mid A}(x)=0$
if $x\in A\implies p_{X\mid A}(x)=\frac {p_X(x)}{P_X(A)}$
$f_{X\mid A}(x)=\frac {f_X(X)}{P(A)}$

**Conditional Expectation**
$E[X\mid A]=\sum_xx\cdot p_{x\mid A}(x)$
$E[X\mid A]=\int_{-\infty}^{\infty}x\cdot f_{x\mid A}(x)dx$
And upon lotus, 
$E[g(X)\mid A]=\sum_xg(x)\cdot p_{x\mid A}(x)$
$E[g(X)\mid A]=\int_{-\infty}^{\infty}g(x)\cdot f_{x\mid A}(x)dx$

**Conditioning Disjoint Partitions**
Let $\{A_i\}$ be a disjoint partition of $\Omega.$
From the law of total probability,
$p_X(x)=\sum_{i=1}^n\mathbb P(A_i)\cdot p_{X\mid A_i}(x)$
and thus,
$E[X]=\sum_{i=1}^n\mathbb P(A_i)\cdot E[X\mid A_i]$

$f_X(x)=\sum_{i=1}^n\mathbb P(A_i)\cdot f_{X\mid A_i}(x)$
and thus,
$E[X]=\sum_{i=1}^n\mathbb P(A_i)\cdot E[X\mid A_i]$

**Conditioning on another Random Variable**
$p_{X\mid Y}(x\mid y)= \frac {p_{XY}(x,y)}{p_Y(y)}$
That is,
${p_{XY}(x,y)}= p_{X\mid Y}(x\mid y)\cdot p_Y(y)$
and by summing for all $y,$
${p_X(x)}= \sum_yp_{X\mid Y}(x\mid y)\cdot p_Y(y)$

Similarly,
${p_Y(y)}= \sum_xp_{Y\mid X}(y\mid x)\cdot p_X(x)$

$f_{X\mid Y}(x\mid y)= \frac {f_{XY}(x,y)}{f_Y(y)}$
That is,
${f_{XY}(x,y)}= f_{X\mid Y}(x\mid y)\cdot f_Y(y)$
and by integrating for all $y,$
${f_X(x)}= \int_{-\infty}^{\infty}f_{X\mid Y}(x\mid y)\cdot f_Y(y)dy$

Similarly,
${f_Y(y)}= \int_{-\infty}^{\infty}f_{Y\mid X}(y\mid x)\cdot f_X(x)dx$


**Conditional Expectation**
$E[X|Y=y]=\sum_x xp_{X\mid Y}(x\mid y)$

Now, $E[X|Y]$ is a function of $y$.
Thus, $E[g(Y)]=E[E[X|Y]]=\sum_y E[X|Y]\cdot p_Y(y)$
$=E[X]$

$E[X|Y=y]=\int_{-\infty}^{\infty} xf_{X\mid Y}(x\mid y)dx$

Now, $E[X|Y]$ is a function of $y$.
Thus, $E[g(Y)]=E[E[X|Y]]=\int_{-\infty}^{\infty} E[X|Y]\cdot f_Y(y)dy$
$=E[X]$


**Independent But Identically Distributed**
Means, for some $X_1, \ldots, X_n,$ they are all mutually independent, but all have a common mean $E[X]$ and a common variance $Var(X).$
(Ex. Consider $n$ simultaneous coin tosses.)

**Line Integral**
Integral of a surface over a line.
Consider $Z=X+Y$
$p_Z(z)=\sum_{\{(x,y):x+y=z\}}p_{XY}(x,y)$
$f_Z(z)=\int_{\{(x,y):x+y=z\}}f_{XY}(x,y)dxdy$

**Convolution Formula**
If $X$ and $Y$ are independent,
$p_Z(z)=\sum_xp_X(X)\cdot p_Y(z-x)$
$f_Z(z)=\int_{-\infty}^{\infty}f_X(X)\cdot f_Y(z-x)dx$




### **MGF**
The moment generating function of a  random variable $X$ is given by $M_X:\mathbb R\rightarrow(0,\infty)$:
$$M_X(t)=E_X[e^{tX}]$$

**Region of Convergence**
$D_X = \{t: M_X(t) < \infty\}$
immer ist $t=0\in D_X$
**$r^{th}$ derivative of MGF**
$M^r_X(t) = \frac {d^r}{dt^r}M_X(t)= E[e^{tX}X^r]$ 
$M^r_X(0)=E[X^r]$

**Property without proof**
if $M_X(t)$ is finite for all $-\epsilon \leq t \leq \epsilon$ for any $\epsilon>0$ then it is indefinitely differentiable on $(-\epsilon, \epsilon)$

If $X$ and $Y$ are independent, then $M_{X+Y}(t)= M_X(t)\cdot M_Y(t)$
because $E[g(X)h(Y)]=E[g(X)]E[h(Y)]$ if they are independent

For some iid $X_i,$ if $Z=\sum_{i=1}^{n} X_i$  then $M_Z(t) = {(M_X(t))}^n$ 

**Inverse Transform Method**
For a discrete $X$ 
we can sample $U$ and 
$X= x_j$ if $\sum_{i=0}^{j-1} p_i \le U < \sum_{i=0}^{j} p_i$ 
i.e. basically if $F_X(x_{j-1}) \le U < F_X(x_{j})$

For a continuous $X$
Consider $\hat X = F^{-1}_X(U)$ 
Then, $F_X(x) = F_{\hat X}(x)= F_{F^{-1}_X(U)}(x)$ 

This means that $F^{-1}_X(U)$ has the same distribution as $X$ and thus we can draw samples from $\hat X$ and this will have the same distribution.

**Probability Integral Transform** *(Universality of Uniform)*
$F_X(\hat X)= U$
$F_X(F_X^{-1}(U))=U$


**Bayes Rule**
$f_{X|Y}(x|y) = \frac {f_X(x)\cdot f_{Y|X}(y|x)}{f_Y(y)}= \frac {f_X(x)\cdot f_{Y|X}(y|x)}{\int_{-\infty}^\infty f_X(t)\cdot f_{Y|X}(y|t)}dt$

$p_{X|Y}(x|y) = \frac {p_X(x)\cdot p_{Y|X}(y|x)}{p_Y(y)}= \frac {p_X(x)\cdot p_{Y|X}(y|x)}{\sum_i p_X(i)\cdot p_{Y|X}(y|i)}$

for a continuous $X$ and discrete $Y$
$P(N=n|Y=y) = \frac 

****

**All Ps so far**

| P            | Name                         | Meaning                                                                                                                                                                                       |
| ------------ | ---------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| $\mathcal P$ | Power Set                    |                                                                                                                                                                                               |
| $\mathbb P$  | Probability Measure          | $\mathbb P:\mathcal F \rightarrow [0,1]$ <br>It acts on sets                                                                                                                                  |
| $P_X$        | Induced Probability Measure  | $P_X:\mathcal F'\rightarrow [0,1]$<br>It acts on sets                                                                                                                                         |
| $p_x$        | Probability Mass Function    | $p_X:\Omega'\rightarrow[0,1]$<br>$p_X(x) = P_X(\{x\})$<br>It acts on individual elements.                                                                                                     |
| $F_x$        | Cumulative Density Function  | $F_X:\Omega'\rightarrow [0,1]$<br>$F_X (x') = \sum_{x\le x'}p_X(x)$<br>$=\mathbb P(\{\omega\in \Omega:X(\omega)\le x'\})$<br>It acts on elements.<br>$F_X (x') = \int_{-\infty}^{x'}f_X(x)dx$ |
| $f_x$        | Probability Density Function | $f_X:\mathbb R \rightarrow [0,\infty)$<br>It is always non negative and <br>$\int_{-\infty}^{\infty}f_X(x)dx=1$                                                                               |

# **Sums and integrals**
**Sum of geometric series**
$$\sum_{k=1}^\infty kx^{k-1}=\frac1{{(1-x)}^2}, |x|< 1$$
$$\sum_{k=1}^\infty k^2x^{k-1}=\frac{1+x}{{(1-x)}^3}, |x|< 1$$
$$\sum _{k=1} ^\infty q^k = \frac q{1-q}, q<1$$
$$\sum_{k=0}^\infty \frac {x^k}{k!} = e^x$$ (Taylor Series Above)



![[Pasted image 20241121142753.png]]![[Pasted image 20241121142225.png]]![[Pasted image 20241121142432.png]]![[Pasted image 20241121142534.png]]![[Pasted image 20241121142628.png]]




| **Random Variable**            | **PDF $$f_X(x)$$**                                                                                                | **CDF $$F_X(x)$$**                                                                                       | **Mean $$E[X]$$**                  | **Variance $$E[(X - E[X])^2]$$**              | **MGF $$M_X(t)$$**                                                                 | **Domain $$D_X$$**              |
|--------------------------------|------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------|------------------------------------|------------------------------------------------|------------------------------------------------------------------------------------|---------------------------------|
| **Uniform $$U[a, b]$$**        | $$\frac{1}{b-a}, \forall x \in [a, b]$$                                                                          | $$\begin{cases}0 & x<a \\ \frac{x-a}{b-a} & x \in [a,b] \\ 1 & x>b\end{cases}$$                           | $$\frac{a+b}{2}$$                  | $$\frac{(b-a)^2}{12}$$                        | $$\begin{cases}\frac{e^{ta} - e^{tb}}{t(b-a)} & t \neq 0 \\ 1 & t=0\end{cases}$$     | $$(-\infty, \infty)$$           |
| **Exponential $$Exp(\lambda)$$** | $$\lambda e^{-\lambda x}, x \geq 0$$                                                                            | $$1 - e^{-\lambda x}, x \geq 0$$                                                                          | $$\frac{1}{\lambda}$$              | $$\frac{1}{\lambda^2}$$                       | $$\frac{\lambda}{\lambda - t}$$                                                   | $$(-\infty, \lambda)$$          |
| **Gaussian $$\mathcal{N}(\mu, \sigma^2)$$** | $$\frac{1}{\sqrt{2\pi\sigma^2}} e^{-\frac{1}{2}\left(\frac{x-\mu}{\sigma}\right)^2}$$                            | -                                                                                                        | $$\mu$$                            | $$\sigma^2$$                                  | $$e^{\mu t + \frac{\sigma^2 t^2}{2}}$$                                             | $$(-\infty, \infty)$$           |
| **Standard Normal $$\mathcal{N}(0, 1)$$** | $$\frac{1}{\sqrt{2\pi}} e^{-\frac{1}{2}x^2}$$                                                                | $$\Phi(x) = \frac{1}{\sqrt{2\pi}} \int_{-\infty}^x e^{-\frac{1}{2}t^2}dt$$                               | $$0$$                              | $$1$$                                         | $$e^{\frac{t^2}{2}}$$                                                            | $$(-\infty, \infty)$$           |


| **Random Variable** | **Definition**                                                                                   | **PMF $$p_X(x)$$**                                           | **CDF $$F_X(x)$$**                                                                | **Mean $$E[X]$$** | **Variance $$E[(X - E[X])^2]$$** | **MGF $$M_X(t)$$**                  | **Domain $$D_X$$**       |
| ------------------- | ------------------------------------------------------------------------------------------------ | ------------------------------------------------------------ | --------------------------------------------------------------------------------- | ----------------- | -------------------------------- | ----------------------------------- | ------------------------ |
| **Indicator**       | $$1_A(\omega) = \begin{cases} 1 & \omega \in A \\ 0 & \omega \notin A \end{cases}$$              | $$\begin{cases} p=\mathbb{P}(A) & 1 \\ 1-p & 0 \end{cases}$$ | -                                                                                 | $$p$$             | $$p(1-p)$$                       | $$p\cdot e^t + 1 - p$$              | $$(-\infty, \infty)$$    |
| **Bernoulli**       | $$X(\omega) = \begin{cases} 1 & \text{with probability } p \\ 0 & \text{otherwise} \end{cases}$$ | $$\begin{cases} p & 1 \\ 1-p & 0 \end{cases}$$               | -                                                                                 | $$p$$             | $$p(1-p)$$                       | $$p\cdot e^t + 1 - p$$              | $$(-\infty, \infty)$$    |
| **Binomial**        | $$B(n, p), 0 \leq k \leq n$$                                                                     | $$\binom{n}{k} p^k (1-p)^{n-k}$$                             | $$\sum_{k=0}^{\lfloor x \rfloor} \binom{n}{k} p^k (1-p)^{n-k}$$                   | $$np$$            | $$np(1-p)$$                      | $${(p\cdot e^t + 1 - p)}^n$$        | $$(-\infty, \infty)$$    |
| **Geometric**       | $$X(p)$$                                                                                         | $$(1-p)^{k-1} p, \, k \geq 1$$                               | $$(1-p)^{\lfloor x \rfloor}, \, x \geq 1$$                                        | $$\frac{1}{p}$$   | $$\frac{1-p}{p^2}$$              | $$\frac{e^t}{1 - e^t \cdot (1-p)}$$ | $$(-\infty, -\ln(1-p))$$ |
| **Poisson**         | $$X(\lambda), \, \Omega' = \mathbb{Z}_{\geq 0}$$                                                 | $$e^{-\lambda} \frac{\lambda^k}{k!}, \, k \geq 0$$           | $$\sum_{k=0}^{\lfloor x \rfloor} e^{-\lambda} \frac{\lambda^k}{k!}, \, x \geq 0$$ | $$\lambda$$       | $$\lambda$$                      | $$e^{\lambda (e^t - 1)}$$           | $$(-\infty, \infty)$$    |
