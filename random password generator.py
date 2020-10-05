import random
import string

x=int(input("Enter the length of the password (minimum 4)"))
x=x-4
def get_random_password():
    random_source = string.ascii_letters + string.digits + string.punctuation
    password = random.choice(string.ascii_lowercase)
    password += random.choice(string.ascii_uppercase)
    password += random.choice(string.digits)
    password += random.choice(string.punctuation)

    for i in range(x):
        password += random.choice(random_source)

    password_list = list(password)
    random.SystemRandom().shuffle(password_list)
    password = ''.join(password_list)
    return password

print("First Random Password is ", get_random_password())
print("Second Random Password is ", get_random_password())
