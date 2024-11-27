[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/tbEHDGEc)
# Git and Github Introduction

| Nama  | Division        | Sub-Division  |
| ----- | ---------- | ---------- |
| Mararevi Subagyo   | ELC | Electrical Design |

![alt text](Image/PepeCry.png)![alt text](Image/Screenshot%202024-11-21%20132155.png)


## Early Procedure
### 1. Git Download
First you need to download git to do so you can do it by going to the website 
   ```
    https://git-scm.com/downloads
   ```
### 2. Account 
Of Course you need an account to do the stuff you are going to do  therefore to make an account you can go to 
   ```
    https://github.com/join
   ```
### 3. Git Dash or Terminal Setting 
After making the account you would need to set your git bash or terminal first before doing the next steps by using commands such as :
```
   git config --global user.name (username)
   git config --global user.email (email)
   ```
### 4. SSH KEYS
To get your SSH keys you can do so by inputing these commands in your terminal or git Bash :
```
ssh-keygen -t ed25519 -C "Your@email.com"
Press ENTER Twice
```
To get your SSH Key you would need the command
```
cat ~/.ssh/id_ed25519.pub
```
It Should look like this 

![alt text](image/Screenshot%202024-11-22%20230920.png)
## This SHOULD be EDITED
##  After getting your SSH key using the `cat` command you would need to add it to your profile,
### 1. To do so, you first need to open on the top right of the corner:

![alt text](Image/Screenshot%202024-11-22%20224615.png)

### 2. Next after opening it you need to go to the settings and open the SSH and GPG Keys
![alt text](Image/Screenshot%202024-11-22%20224823.png)
### 3. Now you can press New SSH key to go add it 
![alt text](Image/Screenshot%202024-11-22%20225145.png)
### 4. At last you can put the SSH Key that you got
![alt text](Image/Screenshot%202024-11-22%20225330.png)
## Create Repository
### 1. Open GitHub
```
https://github.com/new
```
### 2. Add your name and File type (it can be public or private)
### 3. Open The new repository
### 4. Click Code then go to SSH
### 5. Copy SSH
to conenct the new repository it can be done manually and automatically
#### A. Manually 
##### I. Create Folder
To create it manually, you need to create a folder in the file explorer with the same exact name as the repository
##### II. Right Click and open in Git bash
##### III. Enter Commands 
```
git init
git remote add origin (SSH Link that was Copied)
git branch -M main
```
##### IV. Check if the local file is the same as the on in Github with this command
```
git pull origin (Branch)
```
#### B. Automatically
To do it pretty much automatically the command `git clone` can be used
##### I. Open git dash at a parent folder
##### II. Enter Commands 
```
git clone (SSH LINK)
```
##### III. Open Folder and run git bash
##### IV. Run this command line 
```
git branch -m main
```
## Push File from Local to Github
### Pushing local files can be done by using commands such as
```
git add . 
git commit -m "Message on what you changed"
git push origin "branch name"
```

## Create New Branch in Github 
To make new branches these steps can be followed :
#### 1. Open the Parent Folder
#### 2. Right click and open in Git bash
#### 3. Insert Commands
```
git checkout -b (branch name)
```
#### 4. To move into the branch that was made you can use this command 
```
git checkout (new branch name)
```

## Delete Branch in Github
To delete branches you you can follow these steps :
### 1. Open Parent folder
### 2. Right click to open on Git bash
### 3. Commands to delete the branches are :
```
git checkout (branch name)
```
the command above is used to move to another branch that is not going to be deleted. The next command is used to delete the branch
```
git branch -d (branch name that wants to be deleted)
```
## Merge Branch
### 1. Merge Branch Commands :
```
git merge (branch that wants to be merged)
```
## Rebase & Fetch
Essesntially Rebase and Fetch are a form of manual process of the command `git merge`. Here are the commands for it 
```
git fetch (branch name)
git pull --rebase (origin/branch name (usually main))
```
`git rebase` can update the local branch by applying all of the commits for another branch to it

# NOTES
### A. Never forget to PULL BEFORE PUSHING A NEW COMMIT
```
git pull (branch name)
git add .
git commit -m (New message)
git push (branch name)
```
### B. incase `fatal: refusing to merge unrelated histories` error comes up TRY USING THE COMMAND `git pull --rebase` and `git fetch`
 
 # Extra Tasks 21 Nov 2024
 ## Electrical Remote Control Diagram
 ![alt text](Image/Electrical%20Remote%20Control.drawio.png)
 ### Explanations : About the Electrical remote control is just standard Procedure in my opinion. first of all signal gets sent from the remote to the receiver and then the receive sends it to the STM32H7 to be intergrated into the coding system. After it is sent to the STM32H7, the signal then gets forwarded to the ESC's using PWM (Pulse Width Modulation) after the process is finished the signal then gets sent to CANBUS for gathering and data sorting from all the other ESC and then gets sent back to the STM32H7.

 ## Fuel Engine Remote Control Diagram
 ![alt text](Image/Fuel%20Engine%20Remote%20Control.drawio.png)
 ### Explanations : In this diagram here i am assuming the servo that is used in the builds are to control how fuel and oil output are given. For example, if you press the trigger to the maximum at the remote control then the servo will turn all the way thus then allowing more fuel and oil to the combustion chamber and allowing the boat to be propulsed

# INTERNSHIP 26 Nov 2024
To see my results of the internship this time it can be found in the `Testing code` folder and HOLY DAMN did my code not work, i don't know what makes it not work, but all i can give is my all because dear god C is going to be the death of me. Here are some of the errors i encountered

![alttext](image2/Screenshot%202024-11-27%20070530.png)
![alttext](image2/Screenshot%202024-11-27%20070830.png)

My solution to that error was to reinstall mysys and fix the default build task so it is directed in the right direciton. However this third error made my head feel like it's made out of rock

![alttext](image2/Screenshot%202024-11-27%20082824.png)
![alttext](image2/Screenshot%202024-11-27%20082833.png)


## I still haven't found the solution to this blank output NEED HELP




 