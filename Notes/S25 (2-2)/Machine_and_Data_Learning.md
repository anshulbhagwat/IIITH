
**Search**
Looking for a sequence of actions that reaches the goal.
**Search Algo**
Takes problem as input and outputs action sequence to be executed by agent.
Environment should be
1. observable (current state know)
2. discrete (finite action set)
3. known (knows states reached by actions)
4. deterministic (each action has one outcome)

**Problem**
1. Initial State
2. Actions Available
3. Transition Model (new state reached by an action at each state)
4. Goal Test
5. Path Cost
State Space = Initial State + Actions Available + Transition Model
Abstraction (removing unnecessary details) is a key step in problem formulation.

State Space: All possible states and transitions defined by the problem.
Path: Sequence of states connected by actions.

**Uninformed Searches**

Performance Metrics:
1. Completeness: Guaranteed to find a solution if one exists.
2. Optimality: Finds the solution with the lowest path cost.
3. Time Complexity: Number of nodes generated during search.
4. Space Complexity: Maximum number of nodes stored in memory.

Problem Size Metrics:
  1. $b$: Branching factor.
  2. $d$: Depth of the shallowest goal node.
  3. $m$: Maximum length of any path in the state space.

| Algorithm           | Complete      | Optimal    | Time Complexity                             | Space Complexity | Key Feature                    | Struct                                        |
| ------------------- | ------------- | ---------- | ------------------------------------------- | ---------------- | ------------------------------ | --------------------------------------------- |
| BFS                 | Yes           | Yes        | $O(b^d)$                                    | $O(b^d)$         | Shallowest solution first.     | FIFO Queue                                    |
| UCS                 | Yes           | Yes        | $O(b^{1 + \lfloor C^* / \epsilon \rfloor})$ | High             | Lowest path cost first.        | Priority Queue                                |
| DFS                 | No (Tree)     | No         | $O(b^m)$                                    | $O(bm)$          | Memory-efficient.              | Lifo Stack                                    |
| DLS                 | If $l \geq d$ | If $l = d$ | $O(b^l)$                                    | $O(bl)$          | Avoids infinite loops.         |                                               |
| IDS                 | Yes           | Yes        | $O(b^d)$                                    | $O(bd)$          | Combines BFS and DFS benefits. |                                               |
| Bidirectional (BFS) | Yes           | Yes        | $O(b^{d/2})$                                | $O(b^{d/2})$     | Searches from both directions. | Efficient for problems with known goal states |

Optimal under specific conditions (e.g., non-decreasing path costs for BFS and IDS).
 $C^*$ is the optimal solution cost and $\epsilon$ is the minimum step cost

**Informed Searches**
Best First Searches
evaluates a function $f(n)$ which must have as one of its components the heuristic function $h(n)$
1. Greedy BFS: memoryless, at each node, visit the next cheapest node, $f(n) =  h(n)$, incomplete for tree search (infinite loops), need not be optimal, can use SLD for continuous spaces (straight line distance)
2. A*, $f(n) =  g(n) + h(n)$, with memory (visited), expands based on open list (cheapest $f(n)$, priority queue), complete and optimal under certain conditions of $h(n)$. Algorithmically identical to UCS of uninformed. The algorithm stops only when the goal node has been expanded (visited), not when it is added to the priority queue.


Criteria for Completeness and Optimality of A*
1. Admissibility: $h(n)$ can never overestimate the actual distance to the goal node. ($h_{SLD}$ works because nothing is shorter than a straight line)
2. Consistency/ Monotonicity: (required for graph search) $h(n)\le c(a,n,n') +h(n')$: for any node $n$, there should be no other node $n'$ such that the path through $n'$ is cheaper than $h(n)$

Proof of Optimality of A* Algorithm
1. If $h(n)$ is consistent, then the values of $f(n)$ along any path are non decreasing. 
   We need to show that $f(n)\le f(n')$ $$f(n) = g(n) + h(n)$$ $$f(n') = g(n') +h(n')$$ $$g(n') = g(n) + c(n,a,n')$$ $$f(n') = g(n) + c(n, a, n') + h(n') \ge g(n) + c(n,a,n') + h(n) \ge g(n) + h(n) = f(n)$$ Thus proven.
 
2. If a node has been selected for expansion, the optimal path to that node has been found.
   To prove this, consider a node $n$ which has been selected for expansion, but it is not the optimal path. That means that there is another node $n'$ through which the path would be shorter. But by the graph separation property, $n'$ would be selected first if it had a lower cost. (The frontier separates the explored region from the unexplored region.)
Thus, the sequence of nodes expanded would have non-decreasing $f(n)$ and thus the first goal node expanded must be the optimal node since any other goal node would be more expensive.

Therefore,
1. A* 
	1. $f(n) < C^*$ all are expanded, otherwise would not be optimal
	2. $f(n) = C^*$ some are expanded (Goal Contour)
	3. $f(n) > C^*$ none are expanded
2. Complete
3. Optimal
4. Optimally Efficient
No other optimal algorithm is guaranteed to expand fewer nodes given the heuristic.

**Absolute Error**
$\Delta = h^* - h$

**Relative Error**
$\epsilon = \frac \Delta{h^*}$  

$h^* =$ actual cost of getting from the root to the goal
$h =$ estimated cost

**Time Complexity**
$O(b^{\Delta})$
$O(b^{\epsilon d})$ (constant step costs)

exponentially many states with $f(n)\le C^*$

**Alternatives**
1. Iterative Depth A* (IDA*): only nodes with less than a certain $f(n)$ (f-cost) are visited, and in the next iteration, the limit changes to the least $f(n)$ of all the nodes not visited (that missed the cuttoff).
2. RBFS (recursive best first search): uses f-limit variables to keep track of f-values, optimal if $h(n)$ is admissible, space complexity is linear

# **Decision Theory**
= Probability Theory + Utility Theory
(deals with chance)     (deals with outcome)

Fundamental principle is the MEU (Maximum Expected Utility Principle)

An agent is rational iff it chooses the action that yields the highest expected utility averaged over all possible outcomes of the action.
Each outcome's utility is weighted against the probability that it occurs.

Rational decision
1. Relative Importance of Various Goals
2. Likelihood or degree to which they will be achieved

Uncertainty changes the way an agent makes a decision. It may not have categorical answers. Probability Theory helps agents reason with uncertainty.



**Utility Theory** (*Von Neumann/ Game Theory*)
Consider a set of outcomes $X$ and that $x_1$ being preferred to $x_2$ in $x_1, x_2\in X$ is represented as $\succ$


1. **Completeness**: Every pair of outcomes is ranked.  
2. **Transitivity**: If $x_1 \succ x_2$ and $x_2 \succ x_3$, then $x_1 \succ x_3$.  
3. **Substitutability**: If $x_1 \sim x_2$, then any lottery in which $x_1$ is substituted by $x_2$ is equally preferred.  
4. **Decomposability**: If two different lotteries assign the same probability to each outcome, then the player is indifferent between them.  
5. **Monotonicity**: If $x_1 \succ x_2$ and $p > q$, then  
   $$  
   [x_1 : p, x_2 : 1 - p] \succ [x_1 : q, x_2 : 1 - q].  
   $$  
6. **Continuity**: If $x_1 \succ x_2 \succ x_3$, there exists a probability $p$ such that  
   $$  
   x_2 \sim [x_1 : p, x_3 : 1 - p].  
   $$

**Utility Theorem** (Von Neumann and Morgenstern Theorem)

Given a set of outcomes $X$ and a preference relation $\succ$ on $X$ that satisfies the six axioms (completeness, transitivity, substitutability, decomposability, monotonicity, continuity), there exists a **utility function** $u: X \to [0,1]$ with the properties:  

1. **Preference Ordering**:  
   $u(x_1) \geq u(x_2)$ if and only if $x_1 \succ x_2$.  
2. **Expected Utility for Lotteries**:  
   The utility of a lottery $[x_1:p_1; x_2:p_2; \ldots; x_m:p_m]$ is:  
   $$
   U([x_1:p_1; \ldots; x_m:p_m]) = \sum_{j=1}^m p_j u(x_j).
   $$  

Posterior or Conditional Probability
$P(A|B\land C)$
Given that we know $B$ and $C$, what is the probability of $A$.

Joint Probability
$P(X_1, X_2, \ldots, X_n)$ assigns probabilities to all possible assignments of values for the variables $X_1, X_2, \ldots, X_n$

**Marginalisation**
Given a table with $n$ boolean variables, there will be $2^n$ assignments. Thus, to find the conditional probability of some given variables within that, from that tables, we integrate/summate over the remaining to get the marginal probabilities.

$P(X|Y) = \frac{\sum P(X,Y)}{P(Y)} = \alpha \sum P(X,Y)$ 
and $\alpha$ is called the marginalising constant.

Then we calculate the marginal probability of $Y$ itself, that is the marginalising constant $\alpha$ and this becomes the normalising factor.

Marginalisation helps in reducing the dimensionality. Independence of variables also helps.
Ex. a 32 element table can be split into two independent 8 element and 4 element tables (2x4 and 2x2)

**Baye's Rule**
$P(A|B) = \frac {P(B|A)P(B)}{P(A)}$
$P(\text{effect}|\text{cause}) =$ causal
$P(\text{cause}|\text{effect}) =$ diagnostic
Posterior = Likelihood x Prior / Evidence
Slightly more general form
$P(A|B,e) = \frac {P(B|A,e)P(B,e)}{P(A,e)}$
(Some background evidence $e$)

**Mutual Independence**
$P(A|B) = P(A)$
$P(B|A) = P(B)$
$P(A)P(B) = P(A,B)$

**Conditional Independence**
$P(A|B, C) = P(A|C)$
$P(B|A,C) = P(B|C)$
$P(A|C)P(B|C)=P(A,B|C)$

**Risk Aversion**
Slope of Utility function is continuously decreasing./

![[Pasted image 20250502231057.png]]

**Pareto Efficient**
Consider an $n$ dimensional utility, then, option $x$ is pareto efficient if for every dimension, it has the highest utility. That is, $\not\exists y$ such that $u_i(y)> u_i(x)$ $\forall i\in{1, 2, 3,\ldots, n}.$

**Propositions**
Declarative statements that are either true or false.
1. Atomic (individuals)
2. Compound (multiple connected by logical connectors)

**Orders of Logic**
1. Zero Order Logic: Propositional Calculus: deals with true or false propositions
2. First Order Logic: over individual elements
3. Second Order Logic: over sets
4. Third Order Logic: over sets of sets
5. Higher Order: union of first, second, and third, allows arbitrarily deep nested sets

**Propositional Logic**
1. Logical Not $\lnot$
2. Logical And $\land$
3. Logical Or $\lor$
4. Logical Implication $A\rightarrow B = \lnot A \lor B$  
5. Logical Iff $A\leftrightarrow B = (A\land B) \lor (\lnot A\land \lnot B)$


**Inference Rules**

| Name                        | Rule                                                                               |
| --------------------------- | ---------------------------------------------------------------------------------- |
| Modus Ponens                | $$P,P\rightarrow Q \implies Q$$                                                    |
| Modus Tollens               | $$P\rightarrow Q,\lnot Q \implies \lnot P$$<br>                                    |
| Hypothetical Syllogism      | $$P\rightarrow Q, Q\rightarrow R \implies P\rightarrow R$$                         |
| And-Elmination              | $$P_1\land P_2\land P_3\land \ldots P_i \ldots \land P_n \implies P_i$$            |
| And Introduction            | $$P_1,P_2, P_3, \ldots, P_n \implies P_1\land P_2\land P_3\land \ldots\land P_n $$ |
| Or Introduction             | $$P_i\implies P_1\lor P_2 \lor \ldots P_i \ldots \lor P_n$$                        |
| Double-Negation Elimination | $$\lnot\lnot P\implies P$$                                                         |
| Unit Resolution             | $$P\lor Q, \lnot Q \implies P$$                                                    |
| Resolution                  | $$P\lor Q, \lnot Q\lor R \implies P\lor R$$                                        |

**Tautologies**
A *tautology* or a *valid sentence* is a proposition which is true for all assignments of its propositional variables.
**Satisfiable**
A proposition is *satisfiable* if it is true for at least one assignment of its propositional variables.
**Unsatisfiable**
A proposition is *unsatisfiable* if it is not satisfiable.
**Implication**
A set of propositions $\alpha$ implies another set of propositions $\beta$ if whenever every proposition in $\alpha$ is true, then every proposition in $\beta$ is also true, and this is represented below.
$$\alpha \implies \beta$$

**Conjunctive Normal Form** *Conjunction: CNF*
$$P_1\land P_2\land P_3 \ldots \land P_n$$
**Disjunctive Normal Form** *Disjunction: DNF*
$$P_1\lor P_2\lor P_3 \ldots \lor P_n$$
Every propositional logic can be rewritten/ converted into CNF and DNF.

**Machine Learning**
1. Supervised: both inputs and outputs are provided (ex. logarithmic regression)
2. Unsupervised: only inputs are provided (ex. grouping/ clustering)
3. Reinforcement: iterative process with rounds of input and output

| Fit   | Bias | Variance |
| ----- | ---- | -------- |
| Over  | Low  | High     |
| Under | High | Low      |
Error is minimised by bias variance tradeoff

**Avoiding Overfitting**
1. Cross Validation: Use validation set of data to tune parameters or compare models (exhaustive means evaluate on all possible train test)
	1. 70:30 Training : Testing (Conventional)
	2. 60:20:20 Training : Testing : Validation (Cross Validation)
	3. $k-$fold cross validation: divide into $k$ parts the data, and try with each as test, for the remaining being train (can also keep one part validation ) (non exhaustive)
	4. Holdout method: split into train-test multiple times, but some may never be in test, some may be many times (non exhaustive)
	5. Leave one out CV (LOOCV) (Exhaustive)
	6. nested cross validation (non exhaustive)
2. Regularisation
	1. Ridge $\alpha\sum m^2$
	2. Lasso  $\alpha\sum |m|$
3. Feature Selection: whether or not to include a feature, $n$ features, $2^n$ feature sets
4. Dimensionality Reduction



| Name             | Year      | Purpose                                                                                    | Distinguishing Feature                                                                                                                                |
| ---------------- | --------- | ------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| **AlphaGo**      | 2015      | Play and master the game of Go, known for complexity and vast number of possible positions | Combined deep neural networks with MCTS (Monte Carlo Tree Search), used human data                                                                    |
| **AlphaGo Zero** | 2017      | Master Go without human data                                                               | Learned through self-play, no prior human knowledge                                                                                                   |
| **AlphaZero**    | 2017      | Master multiple games (Go, chess, shogi)                                                   | Single algorithm for multiple games, no domain-specific knowledge, reinforcement self learning                                                        |
| **MuZero**       | 2019      | Master various tasks without rule knowledge                                                | Learned environment dynamics internally, more general                                                                                                 |
| **AlphaFold**    | 2018/2020 | Predict protein structures from amino acid sequences                                       | High-accuracy protein structure prediction using deep learning, helps in understanding disease and drug discovery, in the field of structural biology |

**Nobel Prizes 2024**
1. Chem: Predicting Protein Structures, out of 10^300 possible structures
2. Physics: Machine learning with artificial neural networks

**Underfitting**
High Bias, Low Variance (consistently close to train data, but far from accurate)
**Overfitting**
Low Bias, High Variance (too close to train data, but also does not generalize)


**Variance**
$$E[\hat f^2]-{E[\hat f]}^2$$
**Bias**
$$E[\hat f] - E[f]$$


**Occam's Razor**
The principle of Occam's Razor states that the simplest hypothesis is often the correct one.


**Association Rules**
$$AR: X\rightarrow Y$$
**Number of Possible ARs**
$n$ is the number of items in the dataset
$$
\sum_{i=1}^{n} \binom{n}{i} \cdot(2^{n-i} - 1) \approx 3^{n}
$$

**Support**
$$P(X\cap Y)$$
**Confidence**
$$P(Y|X)$$
**Lift**
$$\frac{P(Y|X)}{P(Y)}$$
Lift > 1 -> good
Lift < 1 -> ignore (bad)

**Apriori Algorithm**
Basis:
If any itemset is not frequent, its supersets cannot be frequent.
An itemset can only be frequent if all its subsets are frequent.
Start with singletons and consider subsets not already discarded.
1. Expand itemset lists: From $k$ sized itemsets list, combine overlapping sets to make a $k+1$ itemsets list. This is called the candidate list. $C$
2. Prune the expanded itemsets list using the apriori property: $k=k+1$
3. Remove infrequent itemsets from the list. This is now the actual list $L$
4. Repeat until no further expansion is possible, i.e., $k = k_{max}$

$O(2^n)$ worst case, but runs fast practically

Algorithms for Association Rules:
1. ECLAT ALgorithm
2. FP Growth

**Classification**
$f:X\rightarrow Y$
a classifier is a function which assigns a class $y\in Y$  for each datapoint $x\in X$
where $X$ is called the feature space and $Y$ is called the target variable

**Bayes Classifier**
$${argmax}_{\forall y\in Y}P(Y=y|X=x)$$
That is, simply calculate the class for which there is maximum probability.

$P(Y=y)$ is the Prior
$P(X=x)$ is the Evidence
$P(Y=y|X=x)$ is the Posterior or conditional probability
$P(X=x|Y=y)$ is the Likelihood

We have
$$Posterior = \frac{Prior \times Likelihood}{Evidence}$$
$$=argmaxP(Y=y)P(X=x|Y=y)$$
because the evidence doesn't matter.


now, if we represent each $x$ as a sum of $d$ independent features
$$=argmaxP(Y=y)P(X=(x_1,x_2,\ldots, x_d)|Y=y)$$
$$=argmaxP(Y=y)P(X=x_1|Y=y)P(X=x_2|Y=y)\ldots P(X=x_d|Y=y)$$

this is called the naive bayes classifier

**Decision Tree**
That feature which separates the classes best should be used.

$k$ bits $\rightarrow$ $2^k$ unique messages
$n$ messages $\rightarrow$ $log_2n$ bits required

**Entropy**
$$H(s) = \sum_ip_i \log_2{(\frac 1{p_i})}$$

$$H(s) = -\sum_ip_i \log_2{(p_i)}$$
where $p_i$ is the probability of each $i^{th}$ class 
**Information Gain**
$$IG(S, A) = H(S) - \sum_{v \in \text{Values}(A)} \frac{|S_v|}{|S|} H(S_v)$$


**ID 3 Algorithm** (Iterative Dichotomiser)
Take the feature which will separate classes best, that is the one which gives the highest information gain.


**Bagging**
Take the majority vote of $k$ classifiers
**Boosting**
Take a weighted vote of $k$ classifiers where each classifier's weight is decided by its accuracy on the training data


**Clustering**
1. Hard clustering: each datapoint assigned to a cluster
	1. Connectivity based
	2. Centroid based
	3. Density based
2. Soft clustering: each datapoint given probability for each cluster

Hierarchical Clustering: Make small clusters, and then make clusters of clusters, and so on in levels
Connectivity Based Clustering:
1. AGNES (Agglomerative Hierarchical Clustering): keep clustering the two closest points (or clusters)
2. DIANA (Divisive): start with one cluster. in each iteration, find the cluster with the two farthest points. these two are now two new centres. recluster each point based on the closest centre.

K-means clustering:
$$\sum_{j=1}^k \sum _{\forall x_i \in c_j}{|x_i-\mu_i|}^2 $$

1. Randomly select $k$ centres. 
2. Assign each point to the closest centre.
3. Calculate the mean of each cluster. 
4. These means are now the new centres. Repeat from 2.

**True Positive Rate**

| Measure                               | Formula                                 |
| ------------------------------------- | --------------------------------------- |
| Accuracy                              | $$\frac {TP + TN} {TP + TN +FP + FN}$$  |
| Recall                                | True Positive Rate                      |
| Precision (Positive Predictive Value) | $$\frac {TP}{TP + FP}$$                 |
| F1 Score                              | $$\frac 1{F1} = \frac 1R + \frac 1 P $$ |
| False Negative Rate                   | $$\frac {FN}{TP +FN}$$                  |
| True Positive Rate                    | $$\frac {TP}{TP +FN}$$                  |
| True Negative Rate                    | $$\frac {TN}{FP +TN}$$                  |
| False Positive Rate                   | $$\frac {FP}{FP +TN}$$                  |

Problems with k-means:

One solution is
**DBSCAN**
Density Based Spatial Clustering of Applications with Noise
closely connected points are marked into the same cluster
loosely connected points are called noise

DBSCAN is optimized such that for any two points $p$ and $q$ in the same cluster, the distance between the two of them must be less than $\epsilon$
$d(p,q)$ is not the physical distance but the path distance

A point $p$ is a core point if at least a set of minpoints exist with a dist of $\epsilon$ from it

A point is directly reachable from a core point if it is within distance of $\epsilon$ in some path from a core point.
1. Find all core points (points with more than minpoints in its epsilon neighbourhood)
2. Find the connected components of each core point, ignoring non core points. These are the clusters.
3. Assign all points to the nearest core point cluster. the remaining non core points are noise.

**Silhouette Score**
For each $i^{th}$ cluster, its silhouette score is given by
$$S_i = \frac{b_i - a_i}{max(a_i, b_i)}$$
where
$a_i$ is the average distance between two points in that cluster
and
$b_i$ is the minimum distance between a point in that cluster and outside that cluster
a higher $S_i$ is better

**Davies Bouldin Score**
$$\frac 1 k \sum_{i=1}^k max_{\forall j}\frac{(a_i + a_j)}{b_{ij}}$$
where 
$a_i$ is the average distance within cluster $i$ 
and
$b_{ij}$ is the distance between cluster $i$ and $j$
lower is better



### Step-by-Step Derivation of Mean Square Error (MSE)

We start by considering the expected value of the squared difference between the true value $y$ and the predicted value $\hat{f}(x)$.
   $$
   E\left[(y - \hat{f}(x))^2\right]
   $$
   where $y = f(x) + \epsilon$, and $\epsilon$ is the noise with mean $0$ and variance $\sigma^2$.

   $$
   E\left[(y - \hat{f}(x))^2\right] = E\left[(f(x) + \epsilon - \hat{f}(x))^2\right]
   $$
   $$
   = E\left[(f(x) - \hat{f}(x))^2 + 2(f(x) - \hat{f}(x))\epsilon + \epsilon^2\right]
   $$
   $$
   = E\left[(f(x) - \hat{f}(x))^2\right] + 2E\left[(f(x) - \hat{f}(x))\epsilon\right] + E\left[\epsilon^2\right]
   $$
   - Since $\epsilon$ has mean $0$, $E[\epsilon] = 0$, and $E[\epsilon^2] = \sigma^2$.
   - The cross-term $E\left[(f(x) - \hat{f}(x))\epsilon\right] = (f(x) - \hat{f}(x))E[\epsilon] = 0$.

   So, the expression simplifies to:
   $$
   = E\left[(f(x) - \hat{f}(x))^2\right] + \sigma^2
   $$

6. **Decompose the first term into bias and variance:**
   - Let $\hat{f}(x)$ be the prediction of the model.
   - The bias is $\text{Bias}[\hat{f}(x)] = E[\hat{f}(x)] - f(x)$.
   - The variance is $\text{Var}[\hat{f}(x)] = E\left[(\hat{f}(x) - E[\hat{f}(x)])^2\right]$.

   The term $E\left[(f(x) - \hat{f}(x))^2\right]$ can be written as:
   $$
   E\left[(f(x) - E[\hat{f}(x)] + E[\hat{f}(x)] - \hat{f}(x))^2\right]
   $$
   Expanding this:
   $$
   = E\left[(f(x) - E[\hat{f}(x)])^2\right] + E\left[(E[\hat{f}(x)] - \hat{f}(x))^2\right] + 2E\left[(f(x) - E[\hat{f}(x)])(E[\hat{f}(x)] - \hat{f}(x))\right]
   $$
   The cross-term is zero because $E[\hat{f}(x) - E[\hat{f}(x)]] = 0$.

   So, we have:
   $$
   = (\text{Bias}[\hat{f}(x)])^2 + \text{Var}[\hat{f}(x)]
   $$
   $$
   E\left[(y - \hat{f}(x))^2\right] = (\text{Bias}[\hat{f}(x)])^2 + \text{Var}[\hat{f}(x)] + \sigma^2
   $$


If the mean of the noise is $m_n$ (not zero), the derivation changes as follows:

   $$
   y = f(x) + \epsilon', \quad \text{where} \quad \epsilon' = \epsilon + m_n
   $$
   Here, $\epsilon$ has mean $0$ and variance $\sigma^2$, so $\epsilon'$ has mean $m_n$ and variance $\sigma^2$.
   $$
   E\left[(y - \hat{f}(x))^2\right] = E\left[(f(x) + \epsilon' - \hat{f}(x))^2\right]
   $$
   $$
   = E\left[(f(x) - \hat{f}(x))^2\right] + 2E\left[(f(x) - \hat{f}(x))\epsilon'\right] + E\left[(\epsilon')^2\right]
   $$
   Since $E[\epsilon'] = m_n$, the cross-term is:
   $$
   2(f(x) - \hat{f}(x))m_n
   $$
   And $E[(\epsilon')^2] = \text{Var}[\epsilon'] + (E[\epsilon'])^2 = \sigma^2 + m_n^2$.
   $$
   E\left[(y - \hat{f}(x))^2\right] = (\text{Bias}[\hat{f}(x)])^2 + \text{Var}[\hat{f}(x)] + \sigma^2 + m_n^2 + 2(f(x) - \hat{f}(x))m_n
   $$



**Supervised Learning** is a type of machine learning where the model is trained on **labeled data**. This means that each training example is paired with an output label. The goal is to learn a mapping from inputs to outputs based on these labeled examples. Common tasks include **classification** (where the output is a category) and **regression** (where the output is a continuous value).

**Unsupervised Learning**, on the other hand, involves training a model on data that **does not have label**ed responses. The system tries to learn the patterns and structure from the data without any explicit guidance on what the output should be. Common tasks include **clustering** (grouping similar data points together) and **dimensionality reduction** (simplifying data without losing important information).

### Example Domain: Customer Segmentation

Let's consider a domain of customer segmentation for a retail store. We have data points representing customers, with features like age and annual income.

#### Supervised Learning Example

In supervised learning, we might have a dataset where each customer is labeled as either "High Spender" or "Low Spender". The goal is to predict the spending category based on age and income.

**Dataset:**

|Age|Annual Income (k$)|Spending Category|
|---|---|---|
|25|50|Low Spender|
|45|200|High Spender|
|30|60|Low Spender|
|50|220|High Spender|
|35|80|Low Spender|
|40|150|High Spender|

#### Unsupervised Learning Example

In unsupervised learning, we use the same features but without the spending category labels. The goal is to group customers into clusters based on their age and income.

**Dataset:**

|Age|Annual Income (k$)|
|---|---|
|25|50|
|45|200|
|30|60|
|50|220|
|35|80|
|40|150|

- **Supervised Learning**: Uses labeled data to train models for prediction tasks. Example: Predicting customer spending category based on age and income.
- **Unsupervised Learning**: Uses unlabeled data to find hidden patterns or intrinsic structures. Example: Grouping customers into clusters based on age and income without predefined categories.


**AlphaFold** is an artificial intelligence system developed by DeepMind to predict protein structures from amino acid sequences. This system represents a significant breakthrough in the field of computational biology.

### Problem Tackled by AlphaFold

The primary problem AlphaFold addresses is **protein structure prediction**. Proteins are essential molecules in all living organisms, performing a vast array of functions. The specific three-dimensional structure of a protein determines its function. Understanding these structures is crucial for insights into biological processes, disease mechanisms, and drug development.

Predicting protein structures from amino acid sequences is a complex problem due to the vast number of possible conformations a protein can adopt. Traditional experimental methods like X-ray crystallography and NMR spectroscopy are time-consuming and expensive. Computational methods, therefore, offer a promising alternative.

### Importance of the Problem
1. Biological Understanding: 
2. Disease Research: 
3. Drug Discovery: 
### Technology Behind AlphaFold

AlphaFold leverages advanced deep learning techniques to predict protein structures. Key components of the technology include:
1. Deep Neural Networks: 
2. Attention Mechanisms:
3. Evolutionary Information: 
4. End-to-End Learning:

