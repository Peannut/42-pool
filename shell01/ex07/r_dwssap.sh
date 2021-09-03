etc/passwd | grep -v ^"#" | sed -n "n;p" | cut -d ":" -f1 
