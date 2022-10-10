# Disclaimer: Youtube Playlist Downloader Does Not Give Permission To Anyone To Download
#  Copyright Content And Does Not Allow To Be Put On Any Other Website Because It Is Illegal,
# If You Save Someone’s Video.  Before You Must Ask For The Video Owner, Then Download And
# Use It, YouTube Playlist Downloader Is Free To Use For Personal And Education Purposes Only.
# Please Respect Youtube Policy.

#Python code to Download Youtube Playlist


#install Pytube module for this program to work using pip command as 
#pip install pytube or pip3 install pytube


from pytube import Playlist

print("Youtube Playlist Downloader")

path = input("Enter the Local path to Download: ")

link = input("Enter Youtube Playlist URL: ")

yt_playlist = Playlist(link)

for video in yt_playlist.videos:
    video.streams.get_highest_resolution().download(path)
    print("Video Downloaded: ",video.title)

print("All videos are downloaded")