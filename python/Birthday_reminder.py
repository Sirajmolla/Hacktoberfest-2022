import time
from plyer import notification
if __name__=='__main__':
    while True:
        notification.notify(
            title="Anjali birthday",
            message="wishing her a happy returns of the day",
            timeout=10)
        time.sleep(10)