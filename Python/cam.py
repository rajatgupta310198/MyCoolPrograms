# Uncomment these lines to see all the messages
#from kivy.logger import Logger
#import logging
#Logger.setLevel(logging.TRACE)

from kivy.app import App
from kivy.lang import Builder
import time
kv = '''
BoxLayout:
    orientation: 'vertical'
    Camera:
        id: camera
        resolution: (640, 480)
        play: True
    ToggleButton:
        text: 'Play'
        on_press: camera.play = camera.play
        size_hint_y: None
        height: '48dp'
'''


class TestCamera(App):
    def build(self):
        return Builder.load_string(kv)

TestCamera().run()

time.sleep(10)