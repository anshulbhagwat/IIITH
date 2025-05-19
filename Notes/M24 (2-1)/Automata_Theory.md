**Finite State Machines**
**DFA** (Deterministic Finite Automaton)
DFA = $(Q,\Sigma,\delta:Q\times \Sigma \rightarrow Q, q_0\in Q, F\subseteq Q)$
A DFA is nothing but a 5-tuple consisting of
1. $Q$: A finite set of states
2. $\Sigma$: An alphabet, that is a finite set of symbols
3. $\delta$: A transition function with a unique transition for each symbol in the alphabet from each state.
4. $q_0$: A single unique start state
5. $F$: A subset of $Q$ with zero or more states which are accepting

**Accept**
If the DFA is on an accepting or final state after the string is read, then it is called *accept*.
**Reject**
If the DFA is on an rejecting or non-final state after the string is read, then it is called *reject*.




**Language**
Any finite set of strings $L$ is called a language.
**Recognition**
A model $M$ recognizes $L$ if $$\forall\omega\in L, M(\omega) accepts$$
**Decision**
A model $M$ decides $L,$ that is $L$ is the language of $M,$ if $$\forall \omega\in L, M(\omega) accepts$$$$\forall \omega\notin L, M(\omega) rejects$$
**Toggled DFA**
$\overline M$ is called the toggled DFA of a model $M$ if $F_{\overline M} = Q - F_M$ and the rest of the DFA is identical. It has the property that $L_{\overline M} = \overline {L_M}$, that is the language of the toggled DFA is the complement of the language of the DFA

**NFA** (Non-Deterministic Finite Automaton)
An NFA differs from a DFA in that
1. Not Unique Transitions: Multiple transitions are possible on the same input for the same state.
2. Missing transitions: There need not be a transition for every input from every state.
3. $\epsilon$ transitions: There can be a transition without reading an input.
Thus, there can be multiple differing runs on the same input, in contrast to the DFA.
NFA = $(Q,\Sigma,\delta:Q\times {(\Sigma\cup \epsilon)} \rightarrow P(Q), q_0\in Q, F\subseteq Q)$
An NFA is nothing but a 5-tuple consisting of
1. $Q$: A finite set of states
2. $\Sigma$: An alphabet, that is a finite set of symbols
3. $\delta$: A transition function with any number of transitions, including $\epsilon$ transitions for any symbol in the alphabet from any state.
4. $q_0$: A single unique start state
5. $F$: A subset of $Q$ with zero or more states which are accepting
**Accept**
If the NFA is on an accepting or final state after the string is read on *any one run*, then it is called *accept*.
**Reject**
If the NFA is on an rejecting or non-final state after the string is read, or crashes, *in every possible run* of the NFA for that string, then it is called *reject*.
**Crash**
If the NFA is not able to proceed with a given input because the transition on that input from that state is not defined
then it is considered a crash run. It is a rejecting run.

**Remembering DFAs**
A DFA of the equivalent logic of an NFA is called a *remembering DFA*. DFAs and NFAs are equally powerful and there exists a remembering DFA for each NFA. Let us prove this.

Let $L_1$ be the set of all languages accepted by DFAs and $L_2$ be the set of all languages accepted by NFAs.
Since all DFAs are also NFAs, we just need already have $L_1\subseteq L_2$. We just need to prove $L_2\subseteq L_1.$
If an NFA $N$  has $k$ states, then its correspond remembering DFA $R$ has at most $2^k$ states.

**Regular Languages**
A language is called regular if there exists a finite automaton that recognizes it. That is, if it is the subset of a language of any finite automaton.

**Regular Operations**
Regular operations are closed on regular languages.
1. Union: $$L_1\cup L_2 = \{\omega|\omega\in L_1 \space or\space \omega\in L_2\}$$
2. Concatenation:$$L_1\cdot L_2 =\{xy|x\in L_1 \space and\space y\in L_2\}$$
3. Star:$$L^*= \{x_1x_2x_3\ldots x_k|\forall k\ge0\space and\space \forall i, x_i\in L\}$$
4. Complement:$$\overline L = \{\omega |\omega \notin L\}= L(\overline M)$$
5. Intersection: $$L_1\cap L_2 = \overline{\overline L_1 \cup \overline L_2} = \{\omega|\omega\in L_1\space and \omega\in L_2\}$$
6. Exponentiation: $$L^n= \{x_1x_2x_3\ldots x_n| \forall i, x_i\in L\space and \space n\ge 0\}$$


$\Sigma ^0 = \{\epsilon\}$
$L = {a}$ for any $a\in \Sigma$ is a regular language.
$L(\phi) = \phi = \{\}$ is a regular (empty) language.
$L(\epsilon) = \{\epsilon\}$ is a regular language.

**Regular Expressions**
Any expression of the following form is called a regular expression:
1. $a$ for any $a\in \Sigma$
2. $\phi$
3. $\epsilon$
4. $R_1+R_2$ where $L(R_1+R_2)=L(R_1)\cup L(R_2)$
5. $R_1*\cdot R_2$ where $L(R_1\cdot R_2)=L(R_1)\cdot L(R_2)$
6. $R^*$ where $L(R^*) = (L(R))^*$
7. $(R)$ where $L((R)) = R$
($R,R_1, R_2$ are regular languages.)

Order of precedence $(), ^*, .,+$
A language is regular $\iff$ $\exists$ a regular expression $R$ such that $L(R)=R$

**Properties of Regular Expressions**
1. Associativity of Addition and Multiplication
2. Distributive Law of Multiplication over Addition
3. Commutativity of Addition
4. Identity of Multiplication = $\epsilon$
5. Identity of Addition = $\phi$
6. Idempotent of Multiplication = $\phi$
7. $\epsilon + RR^* = \epsilon + R^*R=R^*$
8. $(R^*)^*=R^*R^*=R^*$
9. $(R_1+R_2)^* = (R_1^*R_2^*)^* = (R_1^*+R_2^*)^*$

**GNFA** Generalized NFA
An NFA with no incoming arrows into the start state and no outgoing arrows from the singular final state is called an GNFA.
To convert a DFA into a Regular Expression, first convert it into a GNFA and then choose states to remove and replace with Regexes one by one.

**Pumping Lemma**
For any regular language $L,$ $\exists p$ such that $\forall \omega \in L, |\omega|\ge p,$ $\exists x,y,z$ such that $\omega = xyz$ and
1. $|xy|\le p$
2. $|y|\ge 1$
3. $xy^iz\in L, \forall i\ge 0$

If $L$ is regular then it obeys the pumping lemma.
Contrapositively, if it does not obey the pumping lemma then it must not be regular.

Let there be some $n$ states in the DFA for the regular language $L.$ 
Take some string $s$ such that $|s|>n$. Thus, by the pigeonhole principle, the sequence of states which the DFA would go through before accepting $s$ must have at least one repeated state, because there are only $n$ states, but at least $|s|$ transitions. 
Let the sequence of states encountered be some $r_1, r_2, \ldots r_k,$ $k> n,$ with at least one $r_i=r_j, i\ne j.$
Thus, there is a cycle of length $|j-i|$ which can be repeated any number of times. Thus, any language recognised by a DFA (any regular language) can be pumped according to the pumping lemma.

**Grammar**
It is a set of rules used to generate strings belonging to a language.
It consists of $(V,\Sigma, P, S)$
where 
$V=$ set of variables
$\Sigma=$ Alphabet (Terminals)
$P:{(V\cup\Sigma)}^*V{(V\cup\Sigma)}^*\rightarrow{(V\cup\Sigma)}^* =$ set of production rules
$S=$ start variable


**Language of the Grammar**
$\mathcal L(G) = \{w\in \Sigma^*|S\implies w\}$
The set of all the strings which can be derived from a grammar is known as the language of that grammar.

**Linear Grammars** *Regular Grammars*
The context free grammars in which any production rules are of the following form are know as linear grammars.  
$Var\rightarrow TerVar$
$Var\rightarrow Ter$
$Var\rightarrow \epsilon$
(*Right Linear*: only a single variable to the right of terminals.)
OR 
$Var\rightarrow VarTer$
$Var\rightarrow Ter$
$Var\rightarrow \epsilon$
(*Left Linear*: only a single variable to the left of terminals.)


**Context Free Grammars**
If the production rules underlying the grammar is of the following form.
$P:V\rightarrow {(V\cup\Sigma)}^*$

**Ambiguity**
A grammar is ambiguous if for the same string, there exist more than one of any of the following:
1. Rightmost Derivation
2. Leftmost Derivation
3. Parse Trees
Ambiguity can be resolved by adding new variables or terminals.

**Rightmost Derivation**
Any rule must be applied to the rightmost variable during derivation.

**Leftmost Derivation**
Any rule must be applied to the leftmost variable during derivation.

**Parse Tree**
Representing the derivation of a string in the form of a tree. Reading the leaves from right to left gives you the string.

Ambiguity can be resolved by adding new variables or terminals.
The problem of deciding whether a grammar is ambiguous is undecidable.

**CNF** *Chomsky Normal Form*
A context free grammar with rules only of the form:
1. $StartVar\rightarrow \epsilon$ (only the start variable can end with epsilon)
2. $Var\rightarrow VarVar$ (any variable can go into exactly two or no variables, the right side cannot contain the start variable).
3. $Var\rightarrow Ter$ (any variable can go into exactly one or no terminals)
The *CNF* has the following property that any string of length $|w|=n$ can be derived in exactly $2\cdot n -1$ steps. (proof by induction)
Thus, to convert any CFG to CNF, the following steps can be followed:
1. Replace all rules of the form $Var\rightarrow \epsilon,$ $Var\neq StartVar$
2. Replace all rules of the form $Var\rightarrow Var_1Var_2\ldots Var_n,$ $n\neq 2$
3. Replace all rules of the form $Var\rightarrow Ter_1\ldots Ter_n$  $n\neq 1$
4. Replace all the rules of the form $Var\rightarrow \ldots StartVar\ldots$ (add a new start variable).

**Pushdown Automata**
In addition to the FSM (Finite State Machine), we would need unbounded memory. 
Consider a stack with $push$ and $pop$.
$a,b\rightarrow c$ means read input $a,$ $pop \space b,$ $push \space c$

An PDA is nothing but a 6-tuple consisting of
1. $Q$: A finite set of states
2. $\Sigma$: An input alphabet, that is a finite set of symbols
3. $\Gamma$: A stack alphabet 
4. $\delta:Q\times \Sigma_\epsilon\times\Gamma_\epsilon\rightarrow \mathcal P(Q\times\Gamma_\epsilon)$: A transition function
5. $q_0$: A single unique start state
6. $F$: A subset of $Q$ with zero or more states which are accepting

For any context free language, there exists a PDA which recognises it. 
Start by pushing $S,$ the start variable of the grammar. 
If the top is any variable $A,$ non deterministically select one of the rules starting with $A$ and pop $A$ and push the rule onto the stack. 
If the top is any terminal $a$ then read it as the output. (Match the input non deterministically.) 
Now, once the stack is empty, you will have read an accepting string (from right to left).

**DPDA** *Deterministic PDA*
For any combination of Input, Stack symbol, at most one valid transition is possible. 
$\delta(q,a,x)=\phi$ or $|\delta(q,a,x)| =1$
Behaviour is entirely predictable, identical for every run, crashes are possible.

**FPDA** *Fully Deterministic PDA*
For any combination of Input, Stack symbol, exactly one valid transition exists. (DPDA without crashes.)
$|\delta(q,a,x)| =1$
Behaviour is entirely predictable, identical for every run, crashes are not possible.

**Pumping Lemma for CFLs**
For any context free language $L,$ $\exists$ a pumping length $p,$ such that for any $w,$  $|w|\ge p,$ $\exists u,v,x,y,z\in \Sigma ^*$ such that
1. $vy\neq \epsilon$
2. $|vxy|\le p$
3. $uv^ixy^iz\in L,$ $\forall i\ge 0$

$Proof$
Consider some CFL with a CFG in CNF with $|V|$ variables. Let $d$ be the maximum number of variables on the right side of any rule.

Take $p = d^{|V|+1}$
Now, take some $w, |w|=p$
Now, the parse tree is of height at least $|V|+1$

The height $h\ge |V|+1$
Consider the lowest $|V|+1$ variable, by the pigeonhole principle, at least one variable must occur more than once. 
Take the tree rooted at the second last occurrence of that variable and replace the tree rooted at the last occurrence of that variable. This can be done any number of times.
The tree rooted at the lowest instance of that variable is $x$. The $v$ and $y$ are the terminals that occur to the left and right of $x$ in the subtree rooted in the second lowest instance of that variable.

**Turing Machine**
A Turing Machine is an FSM which has only a single but infinite input-output tape. It can read, write, and move its head left or right, one cell at a time. The head starts at the zeroeth cell of the tape, and the tape initially contains the input followed by infinite blanks ($B$).
Furthermore, it has a set of accept as well as reject states. And accept is defined as reaching an accept state and reject as reaching a reject state. Halting is defined as reaching an accept or reject state. 
It is not necessary that the input is entirely read for a string to be accepted or rejected.


An Turing Machine is nothing but a 7-tuple consisting of
1. $Q$: A finite set of states
2. $\Sigma$: An input alphabet, that is a finite set of symbols, not including $B$
3. $\Gamma$: A tape alphabet, $B\in \Gamma,$  $\Sigma \subset \Gamma$  
4. $\delta:Q\times \Gamma\rightarrow Q\times \Gamma \times \{L,R\}$: A transition function
5. $q_0$: A single unique start state
6. $q_{acc}$: An accept state, $q_{acc}\in Q$
7. $q_{rej}$: A reject state $q_{rej}\in Q-q_{acc}$ 

**Configuration of a TM**
It is a 3-Tuple of 
1. The current state
2. The current tape contents
3. The current head location

A configuration $C_x$ yields another $C_y$ if the TM changes from $C_x$ to $C_y$ in one single step.

$M$ accepts $w$ if there exists a sequence of configurations $C_1, C_2,\ldots C_k$ such that
1. $C_1$ is the start configuration of $M$ on $w$
2. Each $C_i$ yields $C_{i+1}$
3. $C_k$ is an accepting configuration.

A TM may never halt. It may loop forever.

Two TMs are equivalent if $M_1$ can be simulate by $M_2$ and vice versa. 

**TM Variants and Equivalence**
1. Lazy Turing Machines: $\{L,R, S\}$ can stay put also
	Proof: just move right and come back.
2. $k$ read-write tapes with $k$ heads
	Join them all, separated by a special character $\#$ and save their position by "underlining" the cell which head is at (double the tape alphabet with underlined and not underlined variants). For every input, you perform the action on all 8 parts of the tape one by one. If you want to write more on one of the parts, you can simply shift everything one to the right.
3. 2-way infinite tape:
	Consider it as two stacks 
4. TM with attached printer *Enumerator*:
5. Non-deterministic Turing Machines: Multiple possible configurations for each input
	Consider a Tree representation of all the possible configurations (A configuration tree). Consider a Deterministic Turing Machine (DTM) with 3 tapes. We can always obtain a bound for maximum number of nodes at any depth (level). So it will run finitely for each level. However, if the tree is of infinite depth, which is possible if it loops infinitely, then the Turing Machine may never halt.
	The first tape stores $w$. The second tape will generate numbers lexicographically, each of which correspond with one branch of the tree. Use tape 3 to run this run on $w$. If the run leads to an accept state, then output accept. Otherwise generate the next lexicographically smallest number on tape 2.

$D$Time is the time taken by DTM
$N$Time is the time taken by NTM
$P=$ set of all problems for which $D$Time is a polynomial in $n=|w|$
$NP=$ set of all problems for which $N$Time is a polynomial in $N$
$P\subseteq NP$ but is $P=NP$?

**TTM**
Total Turing Machine always halts. 
$\forall w\in\Sigma ^*,$  $M(w)$ accepts or $M(w)$ rejects
TTM = Algorithm

**Recursive Language**  ($R$)
$=$Decidable/Turing Decidable
$\exists$ TTM $M$ such that 
$\forall w\in L, M(w)$ accepts
$\forall w\notin L, M(w)$ rejects
(Always halts)


**Recursively Enumerable** ($RE$)
$=$Turing Recognisable $=$ *Partially Decidable*
$\exists$ TM $M$ such that 
$\forall w\in L, M(w)$ accepts
$\forall w\notin L, M(w)$ does not accept

**Co-Recursively Enumerable** ($\overline {RE}, Co-RE, nRE$)
$=$Co-Turing Recognisable $=$ *Completely Undecidable*
$\exists$ TM $M$ such that 
$\forall w\in L, M(w)$ doesn't reject
$\forall w\notin L, M(w)$ rejects

**Encoding**
We can encode a TM as a binary string and pass it as input to a TM.
$\langle M\rangle$ is the encoding of $M$ as a binary string.
$M(\langle M_1,w\rangle)$ is the TM which runs the TM $M_1$ on $w$ and outputs accept if it accepts and reject if it rejects.
Since any TM is just a 7 Tuple, we can encode it as 7 encodings separated by let us say 1.
Every other binary number is encoded with $0=00$ or $1=01$
$Q$ is encoded as $\langle|Q|\rangle =\langle m\rangle$ in binary.
$\Sigma$ is encoded as $\langle|\Sigma|\rangle = \langle k\rangle$ in binary.
$\Gamma$ is encoded as $\langle|\Gamma|\rangle = \langle n\rangle$ in binary, $\langle B\rangle=\langle n-1\rangle$
$\langle q_i\rangle = \langle i\rangle$
$\langle \delta\rangle = \langle\langle\delta_0 \rangle,\langle\delta_1\rangle,\ldots\langle\delta\rangle\rangle$

$A_X$ is the language $\{\langle X, w\rangle|w\in \mathcal L (X)\}$
$E_X$ is the language $\{\langle X\rangle| \mathcal L(X) = \phi\}$

**Decidable Languages**
$A_{DFA}, A_{CFG}, E_{DFA}, E_{CFG}$ are all decidable.
Proof:
1. $A_{DFA}$ Run the DFA with the given input.
2. $E_{DFA}$ Run DFS/BFS and see if start leads to accept state.
3. $A_{CFG}$ Convert to CNF and check all derivations of $2n-1$ length.
4. $E_{CFG}$ Check if there is a path from start variable to terminal.
**Partially Decidable Languages**
$A_{TM}, HALT_{TM}, \overline {E_{TM}}$
**Completely Undecidable Problems**
$\overline {A_{TM}}, \overline {HALT_{TM}}, E_{TM}$
**Problems that are neither RE nor nRE**
$REGULAR_{TM}=\{\langle M\rangle|\mathcal L(M)$ is regular$\}$


$A_{TM}$ is undecidable ($A_{TM}\in RE)$ 
$A(\langle M, w\rangle)$ accepts if $M(w)$ accepts, and rejects otherwise.
If $A$ existed, then we could construct some $D$ that merely gives the opposite output. 
That is, $D(\langle M\rangle)$ accepts if $M(\langle M\rangle)$ rejects and accepts otherwise.
However, we have that if $D(\langle D\rangle)$ accepts, then $D(\langle D\rangle)$ rejects and vice versa. This is a contradiction. Hence there doesn't exist such a $D$ and hence there cannot exist such an $A_{TM}\in R$. 
(Proof by Diagonalisation.) It is by definition the complement.

**Entschediungsproblem**
$HALT_{TM}(\langle M, w\rangle)$ accepts if $M(w)$ halts (rejects or accepts) and rejects if it loops. 

If $HALT_{TM}$ existed, then we could surely build an $A_{TM}$ by the following method: if $HALT_{TM}$ rejects, then simply output reject because we know it loops infinitely. If it accepts, then we can run $M$ on $w$ and output the output because we know it halts.

$\preceq$
$A_{TM} ≼ HALT_{TM}$
$A_{TM}$ reduces to $HALT_{TM}$ because we can build a solver for $A_{TM}$ using a solver for $HALT_{TM}$
Thus, $HALT_{TM}$ is undecidable.


($A$ reduces to $B,$ $B$ is at least as hard as $A,$ $A$ is not harder than $B$)
$A ≼ B\implies$ 
1. $A \notin R\implies B\notin R$
2. $A \notin RE\implies B\notin RE$
3. $A \notin \overline{RE}\implies B\notin \overline {RE}$
4. $B\in R\implies A\in R$
5. $B\in RE\implies A\in RE$
6. $B\in \overline{RE}\implies A\in \overline {RE}$

$\overline {A_{TM}} ≼ E_{TM}$

$T_E$ is the Turing Machine for $E_{TM}$
$E_{TM}=\{\langle M\rangle | \mathcal L(M)=\phi\}$

$\overline A(\langle M, w\rangle)$ accepts if $M(w)$ does not accept and it rejects otherwise.
That is $\overline A(\langle M, w\rangle)$ accepts if $M(w)$ rejects or goes on in infinite loops and it rejects if $M(w)$ accepts.

Now all I have to do, is construct a description of $T_{\langle M,w\rangle}$ which, after simulating, rejects if $M(w)$ rejects or goes on in infinite loops and it accepts if $M(w)$ accepts, irrespective of the input. I pass this description $T_E(\langle T_{\langle M,w \rangle}\rangle)$ and if it outputs accept then it means $M(w)$ was not accepted (language was empty), and if it outputs reject then it means that $M(w)$ accepted (language was not empty). 
Thus we have reduced $\overline {A_{TM}} ≼ E_{TM}.$

Now, since $\overline {A_{TM}}$ is undecidable, so is $E_{TM}.$

$E_{TM}\in nRE\implies \overline {A_{TM}}\in nRE$

**Language**
$RL(RG, RE, FA)\subset DCFL(DPDA)\subset CFL(CFG,PDA) \subset R(TM)|$ (boundary of computation)$| \subset RE$
![[Pasted image 20240919112100.png]] (Not-Decidable $=$ Beyond Boundary of Computation)


![[Pasted image 20240919112142.png]]
1. Regular Languages $\rightarrow$ Finite Automata, Linear Grammars, Regular Expressions
2. Context Free Languages $\rightarrow$ Pushdown Automata, Context Free Grammar
3. Deterministic Context Free Languages $\rightarrow$ Deterministic Pushdown Automata
4. Context Sensitive Languages $\rightarrow$ Turing Machines
5. Recursive Languages $\rightarrow$ Deciders
6. Recursively Enumerable Languages $\rightarrow$ Enumerators


**Regular Languages are closed under:**
1. $\cup$ Union 
2. $\cap$ Intersection
3. $^*$ Star
4. $.$ Concatenation
5. $\overline\space$ Complement
6. $^n$ Exponentiation

**Context Free Languages are closed under:**
1. $\cup$ Union 
2. $^*$ Star
3. $.$ Concatenation
4. $^n$ Exponentiation
**But not under:**
5. $\cap$ Intersection
6. $\overline\space$ Complement
(However, Intersection of any Regular language with any CFL is still a CFL.)
(DCFLs are closed under complementation, but not under union or intersection)


**Recursive Languages are closed under**
1. $\cup$ Union 
2. $\cap$ Intersection
3. $^*$ Star
4. $.$ Concatenation
5. $\overline\space$ Complement
6. $^n$ Exponentiation

**Recursively Enumerable Languages are closed under**
1. $\cup$ Union 
2. $\cap$ Intersection
3. $^*$ Star
4. $.$ Concatenation
5. $^n$ Exponentiation

**Co-Recursively Enumerable Languages are closed under**
1. $\cup$ Union 
2. $\cap$ Intersection
3. $^*$ Star
4. $.$ Concatenation
5. $^n$ Exponentiation


**Some Properties**
$L$ is $RE$ and $\overline L$ is $RE\iff L$ is $R\iff L$ is $\overline {RE}$ and $\overline L$ is $\overline {RE}$
$L$ is $R\iff \overline L$ is $R$

