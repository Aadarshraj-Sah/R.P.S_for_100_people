# Rock paper scissors with 100 players
### Modifying the game as follows so that 100 players can play fairly:

Say there's one cookie left and you and your friend want to decide who gets it. Toss a coin. What if you don't have a coin? Play Rock Paper Scissors (RPS). Ok, now what if there are 3 of you, let's say Alice, Bob, and Charlie? If there was a fourth friend, you could just have an RPS tournament. But with only 3 people, there's no fair tournament, like, one person will go straight to the finals while the other two have to play each other in semifinals first. Maybe you can all play each other and hope that one person wins twice. If everyone wins once (ex. Alice beats Bob, who beats Charlie, who beats Alice), then you just repeat the process until one of you wins twice.

But this seems complicated and time consuming. I felt like there should be a simpler process, and here's what I came up with. Make Alice and Bob play each other. If one of them wins, the winner gets the cookie. If they draw, then Charlie gets the cookie. Since the probability of Alice winning, of Bob winning, and of there being a draw are all 1/3, everyone has the same chance of getting the cookie. One nice thing about this method is it actually puts the draw to use. Normally if two people draw when playing RPS, they have to play again, but in this 3 way version of RPS, you just play once and someone is guaranteed to "win". This actually suggests that regular RPS, where there are only two people, can be improved.
Here's a two player game I call Same or Different (SD). Let's say Alice and Bob are playing. One of them chooses "same" and the other chooses "different" (Ex. Alice is same, Bob is different). Then, at the same time, each of them brings up their hand either palm up or palm down. If both hands are the same orientation (i.e. both up or both down) then Alice wins. If they're different Bob wins. It's clear that this is a fair game, since no matter what orientation a player plays, they have a 50-50 chance of winning or losing. And, unlike RPS, there's no chance of drawing.

Ok, let's consider 3 way RPS again. I realized there are two issues with it. First, it's not clear how to generalize it to more than 3 people, and second, it leaves room for conspiracies between players. To explain the second point, imagine Alice promises Bob that if he loses to her on purpose, then Alice will split the cookie and give him half. Then the game becomes unfair for Charlie, he's guaranteed to lose. It's clear that a fair game must actively involve all 3 players. It's finally time to introduce the game that fixes all these problems. I don't really have a name for it, so I'll just call it Modulo.

## The Modulo game

I'll start by explaining how to play Modulo with 3 players. First, each player is assigned a different number from the list: 0, 1, 2. 
Ex. Alice is 0, Bob is 1, Charlie is 2. Then, each player thinks of a number in that same list and jots it down, and at the same time, everyone reveals their number. Ex. Alice chooses 2, Bob chooses 0, Charlie chooses 2. Finally, the numbers are summed, in this case giving 4, and the remainder is taken after dividing by 3, in this case 1. In math lingo we'd say we take 4 modulo 3 to get 1, or just 4 = 1 mod 3. Then since Bob was assigned 1 at the start, he wins. Imagine that Alice and Bob wanted to conspire against Charlie. They could decide to make their numbers add up to T, for any number 0 <= T <= 4. But the true total, including Charlie's number, will be one of: T+0, T+1, T+2, and could have any remainder mod 3. Ex. If T=4, then T+0=4=1mod3, T+1=5=2mod3, T+2=6=0mod3. Conspiracies thwarted!

And it's easy to generalize this game for N players. Each player is assigned a different number from 0 to N-1, and each player chooses a number from 0 to N-1. The total is calculated, and we mod it by N to find the winner.

Remember Same or Different (SD)? That's actually the Modulo game for 2 players, in disguise. Think of same as $0$ and different as 1, and think of palm down as 0 and palm up as 1. In SD, the "same" player wins if both players go palm down or palm up, which is analogous to Modulo, where player $0$ wins if both players choose 0, because 0+0=0=0mod2, or if both players choose 1, because 1+1=2=0mod2. In SD, the "different" player wins if one player goes palm down and the other goes palm up, which is analogous to Modulo, where player 1 wins if one player chooses 0 and the other chooses 1, because 0+1=1=1mod2.

## Repository contains following files:
* __main.cpp__ - 
  * program for execution of the game.  
  * It takes input of number of players, total tournaments and number (0 - N-1) chosen by each player and outputs the winner in each tournament. 
* __testgen.cpp__ -  
  * program which generates testcase for 100 players and 1 million tournaments.

## Commands to Run the program.
Download the Repository. And open terminal at the folder. 
Execute following commands one by one:
```
g++ testgen.cpp
./a.out >test.txt

g++ main.cpp 
./a.out <test.txt > results.txt

```
After execution:  
A results.txt will be genrated showing winner in each of the Million tournaments.
Since number of Tournaments is huge (A million) so executions might take few seconds.


