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
 * OAICommon_File.h
 *
 * Object representing a file used in a request or response context 
 */

#ifndef OAICommon_File_H
#define OAICommon_File_H

#include <QJsonObject>

#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_File : public OAIObject {
public:
    OAICommon_File();
    OAICommon_File(QString json);
    ~OAICommon_File() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSFileName() const;
    void setSFileName(const QString &s_file_name);
    bool is_s_file_name_Set() const;
    bool is_s_file_name_Valid() const;

    QString getSFileUrl() const;
    void setSFileUrl(const QString &s_file_url);
    bool is_s_file_url_Set() const;
    bool is_s_file_url_Valid() const;

    QByteArray getSFileBase64() const;
    void setSFileBase64(const QByteArray &s_file_base64);
    bool is_s_file_base64_Set() const;
    bool is_s_file_base64_Valid() const;

    QString getEFileSource() const;
    void setEFileSource(const QString &e_file_source);
    bool is_e_file_source_Set() const;
    bool is_e_file_source_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_file_name;
    bool m_s_file_name_isSet;
    bool m_s_file_name_isValid;

    QString s_file_url;
    bool m_s_file_url_isSet;
    bool m_s_file_url_isValid;

    QByteArray s_file_base64;
    bool m_s_file_base64_isSet;
    bool m_s_file_base64_isValid;

    QString e_file_source;
    bool m_e_file_source_isSet;
    bool m_e_file_source_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_File)

#endif // OAICommon_File_H
