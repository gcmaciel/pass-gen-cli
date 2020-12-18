import sys
import random

# Check usage
if len(sys.argv) > 2:
    print("Usage: You must provide only one argument")
    sys.exit(1)
elif len(sys.argv) < 2:
    print("Usage: You must provide an argument")
    sys.exit(1)

input = sys.argv[1]

# A few more check
if not input.isdigit():
    print("Usage: The argument must be a number")
    sys.exit(1)
elif int(input) < 4:
    print("Usage: The minimum length has to be 4")
    sys.exit(1)
elif int(input) > 90:
    print("Usage: The maximum length has to be 90")
    sys.exit(1)

# Make sure the generated password will have the desired length
pass_length = int(input) - 3

alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
numbers = ['0','1','2','3','4','5','6','7','8','9']
special_characters = ['!','@','#','$','%','&','*']

pass_list = []

# Get a random letter from alphabet, convert to uppercase and append to pass_list
random_letter = random.choices(alphabet)
letter = ''.join(random_letter)
upper_letter = letter.capitalize()
pass_list.append(upper_letter)

# Get a random special character and append to pass_list
random_special = random.choices(special_characters)
special = ''.join(random_special)
pass_list.append(special)

# Get a random numbert and append to pass_list
random_number = random.choices(numbers)
number = ''.join(random_number)
pass_list.append(number)

# Get random letters from alphabet and append to pass_list
for i in range (int(pass_length)):
    random_item = random.choices(alphabet)
    item = ''.join(random_item)
    pass_list.append(item)

# Convert pass_list to str
password = ''.join(pass_list)

print(password)
