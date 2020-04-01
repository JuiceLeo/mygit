# mygit
关联github远程仓库，首先先保证当前仓库没有README.md文件，还有当前master分支没有其他未提交的内容（git status 查看）
1> git remote add origin 远程仓库地址(github clone里查看)
2> git pull origin master  先pull到本地 
3> git push -u origin master  再推送push到远程仓库
