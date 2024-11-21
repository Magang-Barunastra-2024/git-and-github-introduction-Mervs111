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

## Create New Branch in Github 

## Delete Branch in Github

## Merging Branch in Github

## Other Procedure
