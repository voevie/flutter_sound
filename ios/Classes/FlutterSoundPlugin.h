#import <Flutter/Flutter.h>
#import <AVFoundation/AVFoundation.h>

@interface FlutterSoundPlugin : NSObject<FlutterPlugin, AVAudioPlayerDelegate>
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)player
        successfully:(BOOL)flag;
- (void)updatePlayerProgress:(NSTimer*) timer;
- (void)updateRecorderProgress:(NSTimer*) timer;
- (void)startPlayerTimer;
- (void)startRecorderTimer;
@end
