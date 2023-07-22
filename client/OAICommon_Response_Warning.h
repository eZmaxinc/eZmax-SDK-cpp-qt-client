/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_Warning.h
 *
 * Generic Warning Message
 */

#ifndef OAICommon_Response_Warning_H
#define OAICommon_Response_Warning_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_Warning : public OAIObject {
public:
    OAICommon_Response_Warning();
    OAICommon_Response_Warning(QString json);
    ~OAICommon_Response_Warning() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSWarningMessage() const;
    void setSWarningMessage(const QString &s_warning_message);
    bool is_s_warning_message_Set() const;
    bool is_s_warning_message_Valid() const;

    QString getEWarningCode() const;
    void setEWarningCode(const QString &e_warning_code);
    bool is_e_warning_code_Set() const;
    bool is_e_warning_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_warning_message;
    bool m_s_warning_message_isSet;
    bool m_s_warning_message_isValid;

    QString e_warning_code;
    bool m_e_warning_code_isSet;
    bool m_e_warning_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_Warning)

#endif // OAICommon_Response_Warning_H
