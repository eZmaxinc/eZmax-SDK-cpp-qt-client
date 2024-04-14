/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsigndocumentlogType.h
 *
 * The Ezsigndocumentlog Type.
 */

#ifndef Field_eEzsigndocumentlogType_H
#define Field_eEzsigndocumentlogType_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigndocumentlogType : public Enum {
public:
    Field_eEzsigndocumentlogType();
    Field_eEzsigndocumentlogType(QString json);
    ~Field_eEzsigndocumentlogType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigndocumentlogType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CLONE, 
        LOGIN, 
        SENDCODE, 
        BADCODE, 
        GOODCODE, 
        BADRESPONSE, 
        GOODRESPONSE, 
        AUTHENTICATION, 
        CREATEPAGE, 
        DOWNLOAD, 
        SEND, 
        SIGN, 
        UPLOAD, 
        VIEW, 
        COMPLETION, 
        CHANGELIMITDATE, 
        UNSIGN, 
        IMPORTFROMINSTANET, 
        SENDEMAIL, 
        FORMCOMPLETION, 
        SIGNATUREATTACHMENTADD, 
        SIGNATUREATTACHMENTVALIDATION, 
        SIGNATUREATTACHMENTREFUSED, 
        SIGNATUREATTACHMENTDELETED, 
        DECLINEDTOSIGN, 
        DELAYEDSENDEMAIL, 
        ANNOTATIONADDED, 
        FLATTEN, 
        REGENERATEPAGE, 
        REGENERATEPAGEFORM, 
        REASSIGN
    };
    Field_eEzsigndocumentlogType::eField_eEzsigndocumentlogType getValue() const;
    void setValue(const Field_eEzsigndocumentlogType::eField_eEzsigndocumentlogType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigndocumentlogType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigndocumentlogType)

#endif // Field_eEzsigndocumentlogType_H
