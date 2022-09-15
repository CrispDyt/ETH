# Programming Techniques for Scientific Simulations I ([401-2813-00L](http://www.vvz.ethz.ch/Vorlesungsverzeichnis/lerneinheit.view?lang=en&lerneinheitId=162932&semkez=2022W&ansicht=LEHRVERANSTALTUNGEN&))


### General information

The course will take place in a **hybrid presence / online** format:

  * **Presence**: Thursday 13:45 - 17:30, [HCI](http://www.mapsearch.ethz.ch/map/mapSearchPre.do?gebaeudeMap=HCI&geschossMap=G&raumMap=3&farbcode=c010&lang=en) [J 3](http://www.rauminfo.ethz.ch/Rauminfo/grundrissplan.gif?gebaeude=HCI&geschoss=J&raumNr=3&lang=en) [>>](http://www.rauminfo.ethz.ch/Rauminfo/RauminfoPre.do?gebaeude=HCI&geschoss=J&raumNr=3&lang=en)

  * **Online**: Live stream over Zoom. All Meeting IDs can be found
                [here](https://gitlab.ethz.ch/pt1_hs22/online).
                (You need your ETH LDAP credentials to login.
                Please send a message to the slack channel [below](#questions)
                or an email to
                [Roger Kaeppeli](mailto:roger.kaeppeli@sam.math.ethz.ch)
                in case of problems.)

  * **Recordings**: All recordings can be found
                    [here](https://gitlab.ethz.ch/pt1_hs22/online).
                    (See remark above for the login credentials.)


### Summary

This lecture provides an overview of programming techniques for scientific
simulations.
The focus is on advanced C++ programming techniques and scientific software
libraries.
Based on an overview over the hardware components of PCs and supercomputers,
optimization methods for scientific simulation codes are explained.


### Questions

For questions or remarks, we have a slack channel where you can reach us:
[Join PT1](https://join.slack.com/t/pt1hs21/shared_invite/zt-zge2s2br-9JXJ6grmG7iin1ovCxTVgA).


## Lecture slides, script, exercises and solutions

Lecture slides, exercise sheets and solutions will be provided as part of this
git repository.
The lecture script is provided as a git [submodule](https://git-scm.com/book/en/v2/Git-Tools-Submodules).
In order to pull that repository you need to initialize it with the following
command:
```
$ git submodule update --init --remote
```

In order to check and get updates from the script repo, use the following:
```
$ git submodule update --remote
```

## Submission

If you want to receive feedback on your exercises, please push your solutions
to your own git repository before **Monday night** of the week after we hand
out the exercise sheet.
Then send a notification / request for correction (possibly with specific
questions) to the respective series' slack channel.
Advanced users may use `GitLab` issues (make sure to tag all the assistants,
but not the professor, with their @name in the issue description).

Your exercise will then be corrected before the next exercise session.
Make sure to give *maintainer* access to the following people:
@karoger, @engelerp, @ilabarca, @ivanalsina, @msudwoj and @rworreby.

Of course, working in small groups is allowed (and even encouraged using a
collaborative workflow with `git` and `GitLab`).
However, please make sure that you understand every part of the group's
proposed solution (you will have to e.g., at the exam!).
If several group members submit the exercises, please indicate clearly in the
notification/request for correction all the group members and indicate
which parts of the solution you would like to have looked at individually
(although we try to run data comparison tools carefully during the correction,
we may miss some individual solution of group members).


## Course confirmation (Testat)

For doctoral students needing the course attendance confirmation (Testat) for
this course, we require that 70% of the exercises have been solved reasonably
(sinnvoll).
The submission deadline is every Wednesday midnight (Zurich time!).

Please announce that you want the course attendance confirmation (Testat) for
this course explicitly at the beginning of the semester by contacting Roger
Kaeppeli by [email](mailto:roger.kaeppeli@sam.math.ethz.ch).
Beforehand, please check with your department's study administration if the
course attendance confirmation (Testat) is what you need.


## Exam information

* For general information, see the performance assessment tab in the course
  catalogue [here](http://www.vvz.ethz.ch/Vorlesungsverzeichnis/lerneinheit.view?semkez=2022W&ansicht=LEISTUNGSKONTROLLE&lerneinheitId=162932&lang=en).

* The exam will have two parts: A written theoretical part, and a programming
  part that you will solve on the exam computers.

* The exam computers will run Fedora Linux, similar to those that you find in
  the computer rooms in the ETH main building.
  The system language of the computers is English.
  A list of the installed software can be found [here](https://www.ethz.ch/services/en/it-services/catalogue/managed-client/computer-rooms.html).
  We strongly recommend that you check out the system in one of the computer
  rooms in the ETH main building beforehand!

* By default, the keyboards will have the Swiss layout.
  There will be a poll for those who want to get a US keyboard instead.

* Provided on the computers are:
    * The full lecture repository
    * The C++ standard ([draft version](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3337.pdf))
    * An offline version of http://www.cppreference.com
      (See *Html book* https://en.cppreference.com/w/Cppreference:Archives)  
      We recommend that you try it out before the exam.
      Also note that the search function is absent: use the Index page and the
      search function of the browser.
    * An offline version of [the Python documentation](https://docs.python.org/3/)
      (See https://docs.python.org/3/download.html)
      We recommend that you try it out before the exam.
    * As needed, offline versions of the documentation for Python libraries.

* This is an open-book exam, which means that you can bring any written
  material (books, notes, printed code, ...).
  However, you may **not** use any digital devices (other than the exam
  computer) during the exam.

* Don't forget to bring your student card (Legi).


## Useful resources


### Literature

C/C++ primers and references:

* Stroustrup, "The C++ Programming Language", 2013.
  Available online within the ETH network [here](https://eth.swisscovery.slsp.ch/permalink/41SLSP_ETH/lshl64/alma99117229936005503).

* Kernighan and Ritchie, "C Programming Language", 1988.

Practical/Advanced C++ programming:

* Meyers, "Effective STL", 2001.
  Available online within the ETH network [here](https://eth.swisscovery.slsp.ch/permalink/41SLSP_ETH/lshl64/alma99117195163705503).

* Meyers, "Effective C++: 50 Specific Ways to Improve Your Programs and
  Designs", 2005.
  Available online within the ETH network [here](https://eth.swisscovery.slsp.ch/permalink/41SLSP_ETH/lshl64/alma99117153949605503).

* Meyers, "Effective Modern C++", 2014.
  Available online within the ETH network [here](https://eth.swisscovery.slsp.ch/permalink/41SLSP_ETH/lshl64/alma99117231955405503).

* Vandevoorde, Gregor, and Josuttis, "C++ Templates: The Complete Guide", 2017.
  Available online within the ETH network [here](https://eth.swisscovery.slsp.ch/permalink/41SLSP_ETH/lshl64/alma99117219345405503).


### Web resources

* [C++ reference](https://en.cppreference.com)
* [C++ standard](https://isocpp.org/)
* [C++ core guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)


### Remote Login to (Fedora)

Some Fedora Linux machines (slab[1-4].ethz.ch) are available by remote login
with Secure SHell (SSH).
See the following website (German):

* https://cd-portal.sp.ethz.ch/linux/Wiki/Remote%20Login%20(Fedora).aspx

For using SSH, please check out the following Working Remotely Tutorial

* https://carpentries-incubator.github.io/shell-extras/02-ssh/index.html
