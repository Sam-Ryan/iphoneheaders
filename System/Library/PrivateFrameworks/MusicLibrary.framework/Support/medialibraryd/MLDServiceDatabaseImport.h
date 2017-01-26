/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3MusicLibrary, MLDMediaLibraryWriter, MLDClient;

@interface MLDServiceDatabaseImport : ML3DatabaseImport {

	ML3MusicLibrary* _library;
	MLDMediaLibraryWriter* _writer;
	MLDClient* _client;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) MLDMediaLibraryWriter * writer;              //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) MLDClient * client;                          //@synthesize client=_client - In the implementation block
-(id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4 ;
-(ML3MusicLibrary *)library;
-(MLDClient *)client;
-(MLDMediaLibraryWriter *)writer;
@end

