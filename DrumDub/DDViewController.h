//
//  DDViewController.h
//  DrumDub
//
//  Created by Andres Socha on 7/20/14.
//  Copyright (c) 2014 AndreSocha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MediaPlayer/MediaPlayer.h"
#import "AVFoundation/AVFoundation.h"

@interface DDViewController : UIViewController <MPMediaPickerControllerDelegate,
                                                AVAudioPlayerDelegate,
                                                AVAudioSessionDelegate>
-(IBAction)selectTrack:(id)sender;
-(IBAction)play:(id)sender;
-(IBAction)pause:(id)sender;
@property (weak,nonatomic)IBOutlet UIBarButtonItem *playButton;
@property(weak,nonatomic)IBOutlet UIBarButtonItem *pauseBotton;
@property (weak, nonatomic)IBOutlet UIImageView *albumView;
@property (weak, nonatomic)IBOutlet UILabel *songLabel;
@property (weak, nonatomic)IBOutlet UILabel *albumLabel;
@property (weak, nonatomic)IBOutlet UILabel *artistLabel;
-(IBAction)bang:(id)sender;
@end
