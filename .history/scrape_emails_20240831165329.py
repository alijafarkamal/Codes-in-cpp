from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.options import Options
import time

# Setup Chrome options (you can add options if needed)
chrome_options = Options()
chrome_options.add_argument("--headless")  # Run in headless mode (no GUI)

# Path to the ChromeDriver executable
chrome_driver_path = '/usr/local/bin/chromedriver'

# Setup the WebDriver
service = Service(chrome_driver_path)
driver = webdriver.Chrome(service=service, options=chrome_options)

# URL to scrape
url = "https://lhr.nu.edu.pk/faculty/"

# Open the webpage
driver.get(url)

# Allow the page to load
time.sleep(5)

# Find all elements that might contain email addresses
email_elements = driver.find_elements(By.XPATH, '//a[contains(@href, "mailto:")]')

# Extract the email addresses
emails = [element.get_attribute('href').replace('mailto:', '') for element in email_elements]

# Print the extracted emails
for email in emails:
    print(email)

# Close the WebDriver
driver.quit()
