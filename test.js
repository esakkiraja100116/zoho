POST /api/submit_clientdata.php
content-type: form or json

Body:
{
	"Client_formData"
		{
			"Client_uid":"123456"
			"client_name":"test"
			"client_mobile":"7878787878"
			"client_email":"test@test.com"
		}
	
	"Client_bioCapture"
		{
			"BMP"
				{
					"LEFT_INDEX_BMP":"base64 string"
					"LEFT_LITTLE_BMP"::base64 string"
					"LEFT_MIDDLE_BMP"::base64 string"
					"LEFT_RING_BMP"::base64 string"
					"LEFT_THUMB_BMP"::base64 string"
					"RIGHT_INDEX_BMP"::base64 string"
					"RIGHT_LITTLE_BMP"::base64 string"
					"RIGHT_MIDDLE_BMP"::base64 string"
					"RIGHT_RING_BMP"::base64 string"
					"RIGHT_THUMB_BMP"::base64 string"
				}
			
			"RAW"
				{
					"LEFT_INDEX_RAW":"base64 string"
					"LEFT_LITTLE_RAW"::base64 string"
					"LEFT_MIDDLE_RAW"::base64 string"
					"LEFT_RING_RAW"::base64 string"
					"LEFT_THUMB_RAW"::base64 string"
					"RIGHT_INDEX_RAW"::base64 string"
					"RIGHT_LITTLE_RAW"::base64 string"
					"RIGHT_MIDDLE_RAW"::base64 string"
					"RIGHT_RING_RAW"::base64 string"
					"RIGHT_THUMB_RAW"::base64 string"
				}
				
			"ISOTEMP"
				{
					"LEFT_INDEX_ISOTEMP":"base64 string"
					"LEFT_LITTLE_ISOTEMP"::base64 string"
					"LEFT_MIDDLE_ISOTEMP"::base64 string"
					"LEFT_RING_ISOTEMP"::base64 string"
					"LEFT_THUMB_ISOTEMP"::base64 string"
					"RIGHT_INDEX_ISOTEMP"::base64 string"
					"RIGHT_LITTLE_ISOTEMP"::base64 string"
					"RIGHT_MIDDLE_ISOTEMP"::base64 string"
					"RIGHT_RING_ISOTEMP"::base64 string"
					"RIGHT_THUMB_ISOTEMP"::base64 string"
				}
		}
}