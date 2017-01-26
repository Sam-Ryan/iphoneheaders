/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface PKDAnnotationStore : NSObject {

	NSURL* _annotationsURL;
	NSMutableDictionary* _annotations;

}

@property (nonatomic,retain) NSURL * annotationsURL;                         //@synthesize annotationsURL=_annotationsURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * annotations;              //@synthesize annotations=_annotations - In the implementation block
+(id)defaultDatabaseURL;
-(id)annotationForPlugIn:(id)arg1 ;
-(void)setAnnotation:(id)arg1 forPlugIn:(id)arg2 ;
-(id)annotationForIdentifier:(id)arg1 ;
-(void)setAnnotationsURL:(NSURL *)arg1 ;
-(BOOL)loadDb:(id*)arg1 ;
-(NSURL *)annotationsURL;
-(BOOL)saveDb:(id*)arg1 ;
-(NSMutableDictionary *)annotations;
-(void)setAnnotations:(NSMutableDictionary *)arg1 ;
-(id)initWithDatabase:(const char*)arg1 ;
@end

