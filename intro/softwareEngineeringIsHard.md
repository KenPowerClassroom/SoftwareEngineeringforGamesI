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



Adapted from https://spectrum.ieee.org/computing/software/why-software-fails
