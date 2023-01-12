# Software Development Life Cycle (SDLC)

A software development life cycle (SDLC) is a process for planning, creating, testing, and deploying a software system.

An SDLC is composed of a number of clearly defined and distinct __work phases__ which are used by engineers and 
developers to plan for, design, build, test, and deliver software systems.

## Example SDLC for house construction

![image](https://user-images.githubusercontent.com/105429/122201264-c674f480-ce93-11eb-959a-79d7caf7636d.png)


Notice:
- task order and dependencies
- time from left to right
- work to do from top to bottom
- different phases have different durations
- the _waterfall_ shape.

## Work phases for software systems (simplified)

- requirements gathering (analysis) - what needs to be built
- design - how it will be built; what functions, classes, screens, libraries are needed 
- development/implementation - writing code
- testing - does it work?
- deployment - get it into the hands of users
- maintenance - fix bugs, add features
- disposal - securely destroy sensitive user data, transfer data to replacement system

An SLDC is a way to organise, sequence and prioritise these work phases.

It might seem natural that an SDLC follow the same waterfall pattern as the house building example given earlier. But it turns out that there are better ways of doing things.

# Overview of different SDLC philosophies

There have been a large number of SDLCs proposed and used, but the generally fall into a small number of 'philosophies'.

## Unstructured SDLC

- Cowboy coding - minimal process or discipline
- Code & Fix
- Chaos coding - resolve the most important issue first, bring to stability

## Waterfall Methods (Big Design Up Front BDUF, linear)

Borrowed from construction & manufacturing industries. we will talk more about waterfall later.

![image](https://user-images.githubusercontent.com/105429/122202919-6aab6b00-ce95-11eb-89c1-1b4f97dfa954.png)

### Examples of waterfal processes
- [SSADM](https://en.wikipedia.org/wiki/Structured_systems_analysis_and_design_method)
- [V-Model](https://en.wikipedia.org/wiki/V-Model)
- [Jackson structured Development (JSD)](https://en.wikipedia.org/wiki/Jackson_system_development)

## Iterative

One of the big problems discovered by waterfall, is that no amount of analysis can correctly answer the question of what is needed.

The basic idea behind this method is to develop a system through repeated cycles (iterative)
allowing software developers to take advantage of what was learned during development of earlier parts or versions of the system.
process start with a simple implementation of a subset of the software requirements and iteratively enhance the evolving versions until the full system is
implemented. At each iteration, design modifications are made, and new functional capabilities are added

## Example iterative processes

![image](https://user-images.githubusercontent.com/105429/122206163-fa064d80-ce98-11eb-9044-fc19c24472e9.png)

- spiral model
  - documentation rquired after each loop
  - little or no customer feedback 
- rapid application development

![image](https://user-images.githubusercontent.com/105429/122206068-de02ac00-ce98-11eb-8158-5a2253bcdc7b.png)


## Contrast with Waterfall

- can deal with unforseen risks
- can deal with changing requirements
- can deliver working software earlier
- learnings in each iteration can improve design in the next iteration



# Iterative, Incremental & Evolutionary - (generally referred to as Agile)

- Iterative = revisiting delivered work to improve/enhance it
- Incremental = dividing the project into small chunks that can be delivered
- Evolutionary = process itself changes and evolves as the team learns about the system and themsleves

## example agile processes

- scrum - focus on project management
- XP - focus on quality code
- Kanban - focus on reducing waste and improving process

![image](https://user-images.githubusercontent.com/105429/122208521-51a5b880-ce9b-11eb-9893-0bbccd0c8737.png)

![image](https://user-images.githubusercontent.com/105429/122208475-3f2b7f00-ce9b-11eb-8d47-87b94fe9635e.png)

![image](https://user-images.githubusercontent.com/105429/122208543-579b9980-ce9b-11eb-8144-11d3dd39a02a.png)




# Contrast with iterative methods

- no one process works for every project, team needs to discover what works for this project
- not every feature has same priority, delay delivery of unimportant features 
- incremental & iterative approach allow very quick delivery cycles - feedback from users is key
- only valuable work is done - discovering what is valuable is not always easy  


# Iterative vs Incremental

![image](https://user-images.githubusercontent.com/105429/212074425-d42f3955-bcad-420e-910e-1319f256e589.png)



# Agile vs Waterfall

## Why Agile is less efficient than Waterfall

Consensus building takes more time than centralised decision making

Agile appears to have less predictability than WF

Agile requires more mature teams

WF has better utilisation of resources
  Specialists only present when needed
  iterations => rework
  
Agile take more time to set-up

WF simplifies Architectural Consistency (agile evolves it)

## Agile is more efficient/effective than Waterfall

(Efficient in short term)
(Effective in long term)

Agile has fewer internal work products (documentation)

Design change in WF means more already-done work products changing

Earlier delivery = earlier ROI

Can change process more quickly

Can stop early when we decide we have done enough

Deliver what is needed

"We didn't get what we asked for, but got what we needed"

# Summary
Waterfall: Waterfall is best suited for projects that have a linear and structured process, such as construction projects, where the scope and goals of the project are well-defined from the start and the goal is to simply carry out the specific tasks in the project plan with minimal changes or adaptations.

Agile: Agile is best suited for projects that require frequent collaboration and adaptation, such as research projects, where the scope and goals of the project may change throughout the process and the goal is to quickly respond to customer needs and changing requirements.


