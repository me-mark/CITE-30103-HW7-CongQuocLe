How to compile and run my programs?

#0
Clone the project into your local
Make sure you installed gcc
(Type gcc --version to check)

#1
Create an .gitignore file into the project
Add following line:
    o/
    .gitignore
o/ contain the output excutable files
.gitignore is created to make sure we don't push the output file to the repo

#3
Run:
gcc question?.c -o o/question?
(replace ? with the number of question)

#4
Run:
o/question
(replace ? with the number of question)
