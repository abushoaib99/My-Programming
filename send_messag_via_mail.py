import smtplib
connection=smtplib.SMTP('smtp.gmail.com',587)
connection.ehlo()
connection.starttls()
connection.login('abushoaib99@gmail.com','nusratjahanaurin')
connection.sendmail('abushoaib99@gmail.com','abushoaib99@gmail.com','This is boss Programming')
connection.quit()

