import time

from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.common import keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait


class login:
    def __init__(self, username, password):
        self.username = username
        self.password = password

        self.Instagram = "https://www.instagram.com/"
        self.browser = webdriver.Chrome('chromedriver.exe')

    def login(self):
        self.browser.get(self.Instagram)
        try:

            WebDriverWait(self.browser, 10).until(
                EC.presence_of_element_located((By.XPATH, '//*[@id="react-root"]/section/main/article/div[2]/div['
                                                          '1]/div/form/div[2]/div/label/input')))
        finally:

            username = self.browser.find_element_by_xpath('//*[@id="react-root"]/section/main/article/div[2]/div['
                                                          '1]/div/form/div[2]/div/label/input')
            username.send_keys(self.username)
            password = self.browser.find_element_by_xpath('//*[@id="react-root"]/section/main/article/div[2]/div['
                                                          '1]/div/form/div[3]/div/label/input')
            password.send_keys(self.password)
            password.send_keys(keys.Keys.ENTER)

    def notification(self):
        try:
            WebDriverWait(self.browser, 10).until(EC.presence_of_element_located((By.XPATH, '/html/body/div['
                                                                                            '4]/div/div/div['
                                                                                            '3]/button[2]')))
        finally:
            off = self.browser.find_element_by_xpath('/html/body/div[4]/div/div/div[3]/button[2]')
            off.click()
            print("worked")
            self.profile()

    def profile(self):
        profile = self.browser.find_element_by_xpath(
            '//*[@id="react-root"]/section/nav/div[2]/div/div/div[3]/div/div[5]/a')

        profile.click()
        time.sleep(2)
        self.follower()

    def follower(self):
        source = BeautifulSoup(self.browser.page_source, 'html5lib')
        # print(source)
        follower = source.find('ul', attrs={'class': ' _3dEHb'})
        print(follower)

        try:
            WebDriverWait(self.browser, 5).until(
                EC.presence_of_element_located((By.XPATH, '//*[@id="react-root"]/section/main/div/ul')))
            time.sleep(2)
        finally:
            follower_icon = self.browser.find_element_by_xpath('/html/body/div[1]/section/main/div/ul/li[3]/a')
            follower_icon.find_element()
            # follower_icon.click()
            # self.get_follower()

    def get_follower(self):
        follower_container = self.browser.find_element_by_xpath('/html/body/div[4]/div/div[2]/ul/div')
        print(follower_container.text)


l = login('username', 'password')
l.login()
time.sleep(3)
l.notification()
