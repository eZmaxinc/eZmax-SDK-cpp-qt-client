/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignpage_Response.h
 *
 * An Ezsignpage Object
 */

#ifndef OAIEzsignpage_Response_H
#define OAIEzsignpage_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignpage_Response : public OAIObject {
public:
    OAIEzsignpage_Response();
    OAIEzsignpage_Response(QString json);
    ~OAIEzsignpage_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignpageId() const;
    void setPkiEzsignpageId(const qint32 &pki_ezsignpage_id);
    bool is_pki_ezsignpage_id_Set() const;
    bool is_pki_ezsignpage_id_Valid() const;

    qint32 getIEzsignpageWidthimage() const;
    void setIEzsignpageWidthimage(const qint32 &i_ezsignpage_widthimage);
    bool is_i_ezsignpage_widthimage_Set() const;
    bool is_i_ezsignpage_widthimage_Valid() const;

    qint32 getIEzsignpageHeightimage() const;
    void setIEzsignpageHeightimage(const qint32 &i_ezsignpage_heightimage);
    bool is_i_ezsignpage_heightimage_Set() const;
    bool is_i_ezsignpage_heightimage_Valid() const;

    qint32 getIEzsignpageWidthpdf() const;
    void setIEzsignpageWidthpdf(const qint32 &i_ezsignpage_widthpdf);
    bool is_i_ezsignpage_widthpdf_Set() const;
    bool is_i_ezsignpage_widthpdf_Valid() const;

    qint32 getIEzsignpageHeightpdf() const;
    void setIEzsignpageHeightpdf(const qint32 &i_ezsignpage_heightpdf);
    bool is_i_ezsignpage_heightpdf_Set() const;
    bool is_i_ezsignpage_heightpdf_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    QString getSImageUrl() const;
    void setSImageUrl(const QString &s_image_url);
    bool is_s_image_url_Set() const;
    bool is_s_image_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignpage_id;
    bool m_pki_ezsignpage_id_isSet;
    bool m_pki_ezsignpage_id_isValid;

    qint32 i_ezsignpage_widthimage;
    bool m_i_ezsignpage_widthimage_isSet;
    bool m_i_ezsignpage_widthimage_isValid;

    qint32 i_ezsignpage_heightimage;
    bool m_i_ezsignpage_heightimage_isSet;
    bool m_i_ezsignpage_heightimage_isValid;

    qint32 i_ezsignpage_widthpdf;
    bool m_i_ezsignpage_widthpdf_isSet;
    bool m_i_ezsignpage_widthpdf_isValid;

    qint32 i_ezsignpage_heightpdf;
    bool m_i_ezsignpage_heightpdf_isSet;
    bool m_i_ezsignpage_heightpdf_isValid;

    qint32 i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    QString s_image_url;
    bool m_s_image_url_isSet;
    bool m_s_image_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignpage_Response)

#endif // OAIEzsignpage_Response_H
