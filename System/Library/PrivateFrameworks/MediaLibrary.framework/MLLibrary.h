/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaLibrary/MediaLibrary-Structs.h>
@class NSString;

@interface MLLibrary : NSObject {

	shared_ptr<mlcore::Library>* _coreLibrary;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) shared_ptr<mlcore::Library>* coreLibrary;              //@synthesize coreLibrary=_coreLibrary - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(ContentBundle*)_iosContentBundle;
-(id)_systemRootDirectory;
-(shared_ptr<mlcore::Library>*)coreLibrary;
-(void)setCoreLibrary:(shared_ptr<mlcore::Library>*)arg1 ;
@end

