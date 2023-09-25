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
 * OAIEzsigntemplatedocumentpage_Response.h
 *
 * An Ezsigntemplatedocumentpage Object
 */

#ifndef OAIEzsigntemplatedocumentpage_Response_H
#define OAIEzsigntemplatedocumentpage_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsigntemplatedocumentpage_Response : public OAIObject {
public:
    OAIEzsigntemplatedocumentpage_Response();
    OAIEzsigntemplatedocumentpage_Response(QString json);
    ~OAIEzsigntemplatedocumentpage_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatedocumentpageId() const;
    void setPkiEzsigntemplatedocumentpageId(const qint32 &pki_ezsigntemplatedocumentpage_id);
    bool is_pki_ezsigntemplatedocumentpage_id_Set() const;
    bool is_pki_ezsigntemplatedocumentpage_id_Valid() const;

    qint32 getIEzsigntemplatedocumentpageWidthimage() const;
    void setIEzsigntemplatedocumentpageWidthimage(const qint32 &i_ezsigntemplatedocumentpage_widthimage);
    bool is_i_ezsigntemplatedocumentpage_widthimage_Set() const;
    bool is_i_ezsigntemplatedocumentpage_widthimage_Valid() const;

    qint32 getIEzsigntemplatedocumentpageHeightimage() const;
    void setIEzsigntemplatedocumentpageHeightimage(const qint32 &i_ezsigntemplatedocumentpage_heightimage);
    bool is_i_ezsigntemplatedocumentpage_heightimage_Set() const;
    bool is_i_ezsigntemplatedocumentpage_heightimage_Valid() const;

    qint32 getIEzsigntemplatedocumentpageWidthpdf() const;
    void setIEzsigntemplatedocumentpageWidthpdf(const qint32 &i_ezsigntemplatedocumentpage_widthpdf);
    bool is_i_ezsigntemplatedocumentpage_widthpdf_Set() const;
    bool is_i_ezsigntemplatedocumentpage_widthpdf_Valid() const;

    qint32 getIEzsigntemplatedocumentpageHeightpdf() const;
    void setIEzsigntemplatedocumentpageHeightpdf(const qint32 &i_ezsigntemplatedocumentpage_heightpdf);
    bool is_i_ezsigntemplatedocumentpage_heightpdf_Set() const;
    bool is_i_ezsigntemplatedocumentpage_heightpdf_Valid() const;

    qint32 getIEzsigntemplatedocumentpagePagenumber() const;
    void setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber);
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Set() const;
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const;

    QString getSComputedImageurl() const;
    void setSComputedImageurl(const QString &s_computed_imageurl);
    bool is_s_computed_imageurl_Set() const;
    bool is_s_computed_imageurl_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatedocumentpage_id;
    bool m_pki_ezsigntemplatedocumentpage_id_isSet;
    bool m_pki_ezsigntemplatedocumentpage_id_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_widthimage;
    bool m_i_ezsigntemplatedocumentpage_widthimage_isSet;
    bool m_i_ezsigntemplatedocumentpage_widthimage_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_heightimage;
    bool m_i_ezsigntemplatedocumentpage_heightimage_isSet;
    bool m_i_ezsigntemplatedocumentpage_heightimage_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_widthpdf;
    bool m_i_ezsigntemplatedocumentpage_widthpdf_isSet;
    bool m_i_ezsigntemplatedocumentpage_widthpdf_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_heightpdf;
    bool m_i_ezsigntemplatedocumentpage_heightpdf_isSet;
    bool m_i_ezsigntemplatedocumentpage_heightpdf_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_pagenumber;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    QString m_s_computed_imageurl;
    bool m_s_computed_imageurl_isSet;
    bool m_s_computed_imageurl_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigntemplatedocumentpage_Response)

#endif // OAIEzsigntemplatedocumentpage_Response_H
