/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsignsignatureAttachmentnamesource.h
 *
 * The source of the name of the attachment added to the Ezsignsignature
 */

#ifndef Field_eEzsignsignatureAttachmentnamesource_H
#define Field_eEzsignsignatureAttachmentnamesource_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignsignatureAttachmentnamesource : public Enum {
public:
    Field_eEzsignsignatureAttachmentnamesource();
    Field_eEzsignsignatureAttachmentnamesource(QString json);
    ~Field_eEzsignsignatureAttachmentnamesource() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignsignatureAttachmentnamesource {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DESCRIPTION, 
        CUSTOMER, 
        DESCRIPTIONCUSTOMER
    };
    Field_eEzsignsignatureAttachmentnamesource::eField_eEzsignsignatureAttachmentnamesource getValue() const;
    void setValue(const Field_eEzsignsignatureAttachmentnamesource::eField_eEzsignsignatureAttachmentnamesource& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignsignatureAttachmentnamesource m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignsignatureAttachmentnamesource)

#endif // Field_eEzsignsignatureAttachmentnamesource_H
