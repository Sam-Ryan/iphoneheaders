/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3MusicLibrary;

@interface ML3LibraryManager : NSObject {

	ML3MusicLibrary* _currentLibrary;

}

@property (nonatomic,retain) ML3MusicLibrary * currentLibrary; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(ML3MusicLibrary *)currentLibrary;
-(void)_switchToLibrary:(id)arg1 ;
-(void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1 ;
-(void)setCurrentLibrary:(ML3MusicLibrary *)arg1 ;
-(id)libraryForAccount:(id)arg1 ;
-(id)pathToLibraryForAccount:(id)arg1 ;
-(void)_setupNotifications;
-(void)_teardownNotifications;
@end

