find . -iname "*.sh" -type f -printf "%f\n" | sed -e 's/\.sh//g'
# sed used to replace ".sh" from file's name.
# 's//g' is the replacement pattern for sed
#   s/[xxx]/: substitute
#   /g: global
