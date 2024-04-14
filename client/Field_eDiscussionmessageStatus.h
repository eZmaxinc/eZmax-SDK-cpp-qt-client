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
 * Field_eDiscussionmessageStatus.h
 *
 * The status of the Discussionmessage
 */

#ifndef Field_eDiscussionmessageStatus_H
#define Field_eDiscussionmessageStatus_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eDiscussionmessageStatus : public Enum {
public:
    Field_eDiscussionmessageStatus();
    Field_eDiscussionmessageStatus(QString json);
    ~Field_eDiscussionmessageStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eDiscussionmessageStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NEW, 
        EDITED, 
        DELETED
    };
    Field_eDiscussionmessageStatus::eField_eDiscussionmessageStatus getValue() const;
    void setValue(const Field_eDiscussionmessageStatus::eField_eDiscussionmessageStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eDiscussionmessageStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eDiscussionmessageStatus)

#endif // Field_eDiscussionmessageStatus_H
