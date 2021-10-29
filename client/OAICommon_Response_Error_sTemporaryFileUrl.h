/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_Error_sTemporaryFileUrl.h
 *
 * Generic Error Message
 */

#ifndef OAICommon_Response_Error_sTemporaryFileUrl_H
#define OAICommon_Response_Error_sTemporaryFileUrl_H

#include <QJsonObject>

#include "OAICommon_Response_Error.h"
#include "OAICommon_Response_Error_sTemporaryFileUrl_allOf.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_Error_sTemporaryFileUrl : public OAIObject {
public:
    OAICommon_Response_Error_sTemporaryFileUrl();
    OAICommon_Response_Error_sTemporaryFileUrl(QString json);
    ~OAICommon_Response_Error_sTemporaryFileUrl() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSTemporaryFileUrl() const;
    void setSTemporaryFileUrl(const QString &s_temporary_file_url);
    bool is_s_temporary_file_url_Set() const;
    bool is_s_temporary_file_url_Valid() const;

    QString getSErrorMessage() const;
    void setSErrorMessage(const QString &s_error_message);
    bool is_s_error_message_Set() const;
    bool is_s_error_message_Valid() const;

    QString getEErrorCode() const;
    void setEErrorCode(const QString &e_error_code);
    bool is_e_error_code_Set() const;
    bool is_e_error_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_temporary_file_url;
    bool m_s_temporary_file_url_isSet;
    bool m_s_temporary_file_url_isValid;

    QString s_error_message;
    bool m_s_error_message_isSet;
    bool m_s_error_message_isValid;

    QString e_error_code;
    bool m_e_error_code_isSet;
    bool m_e_error_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_Error_sTemporaryFileUrl)

#endif // OAICommon_Response_Error_sTemporaryFileUrl_H
