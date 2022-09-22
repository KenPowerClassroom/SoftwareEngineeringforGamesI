# Software Engineering in the real world is hard!



## Ariane 5 https://www.youtube.com/watch?v=N6PWATvLQCY&t=29

Coding bug - instantaneous value instead of averaged

## NHS health records System

- Started in 2002
- Scrapped in 2012
- Budget £2.3 billion
- Spent  £20 billion

## Leaving Cert Glitch 2020 (https://www.thejournal.ie/leaving-cert-norma-foley-5218969-Sep2020/) 

- " We knew one line out of 50,000 lines of code, had a mistake in it. "
- "approximately 6,500 students had received a grade lower than they ought to have received"


# Why do projects fail so often?

Among the most common factors:

- Unrealistic or unarticulated project goals
- Inaccurate estimates of needed resources
- Badly defined system requirements
- Poor reporting of the project’s status
- Unmanaged risks
- Poor communication among customers, developers, and users
- Use of immature technology
- Inability to handle the project’s complexity
- Sloppy development practices
- Poor project management
- Stakeholder politics
- Commercial pressures


Of course, IT projects rarely fail for just one or two reasons. Most failures, in fact, can be traced to a combination of 
technical, project management, and business decisions. Each dimension interacts with the others in complicated ways that exacerbate project 
risks and problems and increase the likelihood of failure.

Consider a simple software chore: a purchasing system that automates the ordering, billing, and shipping of parts, 
so that a salesperson can input a customer’s order, 
have it automatically checked against pricing and contract requirements, 
and arrange to have the parts and invoice sent to the customer from the warehouse.

The requirements for the system specify four basic steps. 
First, there’s the sales process, which creates a bill of sale. 
That bill is then sent through a legal process, which reviews the contractual terms and conditions of the potential sale and approves them. 
Third in line is the provision process, which sends out the parts contracted for, 
followed by the finance process, which sends out an invoice.

Let’s say that as the first process, for sales, is being written, the programmers treat every order as if it were placed in the company’s main location, 
even though the company has branches in several states and countries. 
That mistake, in turn, affects how tax is calculated, what kind of contract is issued, and so on.
The sooner the omission is detected and corrected, the better. 

It’s kind of like knitting a sweater. If you spot a missed stitch right after you make it, you can simply unravel a bit of yarn and move on. 
But if you don’t catch the mistake until the end, you may need to unravel the whole sweater just to redo that one stitch.

If the software coders don’t catch their omission until final system testing—or worse, 
until after the system has been rolled out—the costs incurred to correct the error will likely be many times greater 
than if they’d caught the mistake while they were still working on the initial sales process.
And unlike a missed stitch in a sweater, this problem is much harder to pinpoint; the programmers will see only that errors are appearing, and these might have several causes. Even after the original error is corrected, they’ll need to change other calculations and documentation and then retest every step.
In fact, studies have shown that software specialists spend about 40 to 50 percent of their time on avoidable rework rather than on what they call value-added work, which is basically work that’s done right the first time. Once a piece of software makes it into the field, the cost of fixing an error can be 100 times as high as it would have been during the development stage.
If errors abound, then rework can start to swamp a project, like a dinghy in a storm. What’s worse, attempts to fix an error often introduce new ones. It’s like you’re bailing out that dinghy, but you’re also creating leaks. If too many errors are produced, the cost and time needed to complete the system become so great that going on doesn’t make sense.
In the simplest terms, an IT project usually fails when the rework cost exceeds the value-added work that’s been budgeted for. 



Adapted from https://spectrum.ieee.org/computing/software/why-software-fails (pdf in reading folder)


# Definition of Software Failure Process (A. Nı̇zam, "Software Project Failure Process Definition," in IEEE Access, vol. 10, pp. 34428-34441, 2022, doi: 10.1109/ACCESS.2022.3162878.) (pdf in reading folder)

### Steps of a failure process

#### Early warning signs arise; however, there is no visible indication of failure. The project team does not understand the overall problem and ignores warnings. 

#### In the rejecting deviations phase, the significant deviation is visible to the team; however, the majority of members do not accept the importance of the problem and tend to mask the problem hoping to overcome it without attracting the scrutiny of executives and other stakeholders 

#### When deviation from the schedule exceeds the nominal limits, the team loses control and unconsciously attempts to rescue the project. 

#### Escalating failure occurs when the team continues to invest even through negative events and missed results. 

#### After a long unproductive escalation cycle, the project loses the support of clients or sponsors, causing its termination.

We prefer the term “the software project failure process” to express the process leading a project to failure. Another possible term may be inspired by nature, such as the waterfall process as “the swamping process”. The more you struggle unconsciously, the more you sink until you drown. More importantly, you will lose your chance to rescue.

1) Ignoring Warnings
This phase refers to a situation in which the software team underestimates or ignores warning signs and the initial emergence of deviations, leading to project failure in the future. Brooks asked the question, “How does a large software project get to be one year late?” and answered it as “One day at a time! Incremental slippages on many fronts eventually accumulate to produce a large overall delay”. 

All project tasks are linked in a complex decision network; thus, total failure can be initiated by the first wrongdoing in the tasks and/or decisions that aggregate and accumulate into more critical problems.

Early warning signs arise as predictions, cautions, or alerts to possible or impending problems. They provide an assessment of risks, future difficulties, and failures during project development. They do not directly represent a major crisis but indicate a need for further investigation to prevent the start of a mistake series. The dynamic and multifactorial nature of many software project problems may prevent immediate or even timely identification of root causes. Moreover, the intangible nature of software makes it difficult to estimate the proportion of work that has been completed [77]. Project managers are often missing the appropriate response to early warnings in many cases [80].

2) Rejecting Deviations
In this phase, the project team intentionally rejects problems or withholds bad news about the project status, as the scale and visibility of deviation increase. The reluctance of people to report bad news about a troubled project is called the “Mum Effect” [77]. This could be a major contributor to the phenomenon of uncontrollable (runaway) software projects. As a passive version of rejecting deviation, it may disrupt communication between team members and occurs very frequently. Snow et al. claimed that biased, generally optimistic status reporting occurs in more than 60 percent of projects.

3) Losing Control
The losing control phase represents the unconscious attempts of a software team to rescue a project after skipping an important milestone or finish date. It is similar to the crunch mode reported in the literature. Aas the date to deliver the slipping milestone approached, teams tried to compensate for the lost time by forcing a team to work more days and hours per week, developers sleeping on the floor for days on end. The exhaustion leads to more bugs that need to be fixed and causes wasting even more time. The delay may affect the management to initiate multiple forms of coping strategies aiming for the same goal: ownership problems, no owner or more than one owner can create political fighting and convert a small problem into a big issue; moreover, team members may be firefighting with or even withholding their problems without considering how these problems might create other problems. The team members stop moving according to the plan and try to catch the schedule unconsciously by focusing on only their tasks.

4) Escalating Failure
Escalating failure is  “continued commitment against negative information” and “an escalation cycle starts following a series of negative project events and the commitment of more resources when decision-makers neither decide to abandon the project nor take corrective actions despite unambiguous negative feedback”. Keil et al. [86] used it to explain “troubled projects were continued instead of being abandoned or redirected”. According to Keil and Mann [87], 30–40 percent of all information system (software) projects involve some degree of project escalation, the average escalation time is 21 months, and less than 25 percent of the escalated projects are completed or implemented. The causes of escalation are more than simple mismanagement of projects and can be psychological, social, and organizational [87].

5) Losing Support
This phase refers to losing support of customers, managers, or other stakeholders because the development process does not meet their requirements and expectations on time. The key reason is the loss of sponsorship support in 80 percent of project abandonment [37] similar to our findings. The management of stakeholders leads a project to success or failure [14]. The withdrawal of a sponsor or stakeholder already contributing to the project has a more detrimental effect on perceptions of project success than starting without a sponsor [88]. Without the strong support of the organization’s managers and sponsor commitment, developers perceive little chance of project success [88], [89].

6) Ending Project
If there is no way for a project to be completed, the terminating project is natural and even healthy [90]. In this phase, the business goal shifts to terminate the project with minimal losses. The primary actions are preparing a termination plan, managing public relations crises, and learning from failures.


