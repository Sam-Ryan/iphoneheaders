/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface POPodcastRevision : NSObject {

	BOOL _isPodcastCollection;
	unsigned long long _revisionID;
	long long _revisionType;
	NSString* _objectID;

}

@property (assign,nonatomic) unsigned long long revisionID;              //@synthesize revisionID=_revisionID - In the implementation block
@property (assign,nonatomic) long long revisionType;                     //@synthesize revisionType=_revisionType - In the implementation block
@property (nonatomic,retain) NSString * objectID;                        //@synthesize objectID=_objectID - In the implementation block
@property (assign) BOOL isPodcastCollection;                             //@synthesize isPodcastCollection=_isPodcastCollection - In the implementation block
-(id)deletedModelObject;
-(BOOL)isPodcastCollection;
-(void)setIsPodcastCollection:(BOOL)arg1 ;
-(id)description;
-(void)setObjectID:(NSString *)arg1 ;
-(NSString *)objectID;
-(void)setRevisionID:(unsigned long long)arg1 ;
-(void)setRevisionType:(long long)arg1 ;
-(long long)revisionType;
-(unsigned long long)revisionID;
@end

