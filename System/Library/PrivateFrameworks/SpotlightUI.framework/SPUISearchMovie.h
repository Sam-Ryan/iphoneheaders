/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPMovie.h>

@class UIImage, NSURLSessionDataTask, SPUISearchMovieCell;

@interface SPUISearchMovie : SPMovie {

	UIImage* _posterImage;
	NSURLSessionDataTask* _dataTask;
	SPUISearchMovieCell* _cell;

}

@property (retain) UIImage * posterImage;                        //@synthesize posterImage=_posterImage - In the implementation block
@property (retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
@property (retain) SPUISearchMovieCell * cell;                   //@synthesize cell=_cell - In the implementation block
-(SPUISearchMovieCell *)cell;
-(void)setCell:(SPUISearchMovieCell *)arg1 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(UIImage *)posterImage;
-(void)loadPosterForCell:(id)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

