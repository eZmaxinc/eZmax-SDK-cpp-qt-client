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
 * OAIEzsignsignatureattachment_Response.h
 *
 * An Ezsignsignatureattachment Object
 */

#ifndef OAIEzsignsignatureattachment_Response_H
#define OAIEzsignsignatureattachment_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsignatureattachment_Response : public OAIObject {
public:
    OAIEzsignsignatureattachment_Response();
    OAIEzsignsignatureattachment_Response(QString json);
    ~OAIEzsignsignatureattachment_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignatureattachmentId() const;
    void setPkiEzsignsignatureattachmentId(const qint32 &pki_ezsignsignatureattachment_id);
    bool is_pki_ezsignsignatureattachment_id_Set() const;
    bool is_pki_ezsignsignatureattachment_id_Valid() const;

    qint32 getFkiEzsignsignatureId() const;
    void setFkiEzsignsignatureId(const qint32 &fki_ezsignsignature_id);
    bool is_fki_ezsignsignature_id_Set() const;
    bool is_fki_ezsignsignature_id_Valid() const;

    QString getBinEzsignsignatureattachmentMd5() const;
    void setBinEzsignsignatureattachmentMd5(const QString &bin_ezsignsignatureattachment_md5);
    bool is_bin_ezsignsignatureattachment_md5_Set() const;
    bool is_bin_ezsignsignatureattachment_md5_Valid() const;

    QString getSEzsignsignatureattachmentName() const;
    void setSEzsignsignatureattachmentName(const QString &s_ezsignsignatureattachment_name);
    bool is_s_ezsignsignatureattachment_name_Set() const;
    bool is_s_ezsignsignatureattachment_name_Valid() const;

    QString getSDownloadUrl() const;
    void setSDownloadUrl(const QString &s_download_url);
    bool is_s_download_url_Set() const;
    bool is_s_download_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignsignatureattachment_id;
    bool m_pki_ezsignsignatureattachment_id_isSet;
    bool m_pki_ezsignsignatureattachment_id_isValid;

    qint32 fki_ezsignsignature_id;
    bool m_fki_ezsignsignature_id_isSet;
    bool m_fki_ezsignsignature_id_isValid;

    QString bin_ezsignsignatureattachment_md5;
    bool m_bin_ezsignsignatureattachment_md5_isSet;
    bool m_bin_ezsignsignatureattachment_md5_isValid;

    QString s_ezsignsignatureattachment_name;
    bool m_s_ezsignsignatureattachment_name_isSet;
    bool m_s_ezsignsignatureattachment_name_isValid;

    QString s_download_url;
    bool m_s_download_url_isSet;
    bool m_s_download_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignatureattachment_Response)

#endif // OAIEzsignsignatureattachment_Response_H
