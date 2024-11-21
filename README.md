[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/tbEHDGEc)
# Git and Github Introduction

| Nama  | Division        | Sub-Division  |
| ----- | ---------- | ---------- |
| Mararevi Subagyo   | ELC | Electrical Design |

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
After making the account you would need to set your git dash or terminal first before doing the next steps by using commands such as :
```
   git config --global user.name (username)
   git config --global user.email (email)
   ```
### 4. SSH KEYS
To get your SSH keys you can do so by inputing these commands in your terminal or git Dash :
```
ssh-keygen -t ed25519 -C "Your@email.com"
Press ENTER Twice
```
To get your SSH Key you would need the command
```
git cat ~/.ssh/id_ed25519.pub
```
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
##### II. Right Click and open in Git Dash
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
##### III. Open Folder and run git dash
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
#### 2. Right click and open in Git Dash
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
### 2. Right click to open on Git dash
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
