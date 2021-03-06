/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)category;
-(NSString *)string;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end

