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

#include "Ezsigntemplatedocumentpage_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatedocumentpage_Response::Ezsigntemplatedocumentpage_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatedocumentpage_Response::Ezsigntemplatedocumentpage_Response() {
    this->initializeModel();
}

Ezsigntemplatedocumentpage_Response::~Ezsigntemplatedocumentpage_Response() {}

void Ezsigntemplatedocumentpage_Response::initializeModel() {

    m_pki_ezsigntemplatedocumentpage_id_isSet = false;
    m_pki_ezsigntemplatedocumentpage_id_isValid = false;

    m_i_ezsigntemplatedocumentpage_widthimage_isSet = false;
    m_i_ezsigntemplatedocumentpage_widthimage_isValid = false;

    m_i_ezsigntemplatedocumentpage_heightimage_isSet = false;
    m_i_ezsigntemplatedocumentpage_heightimage_isValid = false;

    m_i_ezsigntemplatedocumentpage_widthpdf_isSet = false;
    m_i_ezsigntemplatedocumentpage_widthpdf_isValid = false;

    m_i_ezsigntemplatedocumentpage_heightpdf_isSet = false;
    m_i_ezsigntemplatedocumentpage_heightpdf_isValid = false;

    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = false;
    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = false;

    m_s_computed_imageurl_isSet = false;
    m_s_computed_imageurl_isValid = false;
}

void Ezsigntemplatedocumentpage_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatedocumentpage_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocumentpage_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatedocumentpage_id, json[QString("pkiEzsigntemplatedocumentpageID")]);
    m_pki_ezsigntemplatedocumentpage_id_isSet = !json[QString("pkiEzsigntemplatedocumentpageID")].isNull() && m_pki_ezsigntemplatedocumentpage_id_isValid;

    m_i_ezsigntemplatedocumentpage_widthimage_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpage_widthimage, json[QString("iEzsigntemplatedocumentpageWidthimage")]);
    m_i_ezsigntemplatedocumentpage_widthimage_isSet = !json[QString("iEzsigntemplatedocumentpageWidthimage")].isNull() && m_i_ezsigntemplatedocumentpage_widthimage_isValid;

    m_i_ezsigntemplatedocumentpage_heightimage_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpage_heightimage, json[QString("iEzsigntemplatedocumentpageHeightimage")]);
    m_i_ezsigntemplatedocumentpage_heightimage_isSet = !json[QString("iEzsigntemplatedocumentpageHeightimage")].isNull() && m_i_ezsigntemplatedocumentpage_heightimage_isValid;

    m_i_ezsigntemplatedocumentpage_widthpdf_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpage_widthpdf, json[QString("iEzsigntemplatedocumentpageWidthpdf")]);
    m_i_ezsigntemplatedocumentpage_widthpdf_isSet = !json[QString("iEzsigntemplatedocumentpageWidthpdf")].isNull() && m_i_ezsigntemplatedocumentpage_widthpdf_isValid;

    m_i_ezsigntemplatedocumentpage_heightpdf_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpage_heightpdf, json[QString("iEzsigntemplatedocumentpageHeightpdf")]);
    m_i_ezsigntemplatedocumentpage_heightpdf_isSet = !json[QString("iEzsigntemplatedocumentpageHeightpdf")].isNull() && m_i_ezsigntemplatedocumentpage_heightpdf_isValid;

    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpage_pagenumber, json[QString("iEzsigntemplatedocumentpagePagenumber")]);
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = !json[QString("iEzsigntemplatedocumentpagePagenumber")].isNull() && m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    m_s_computed_imageurl_isValid = ::Ezmaxapi::fromJsonValue(m_s_computed_imageurl, json[QString("sComputedImageurl")]);
    m_s_computed_imageurl_isSet = !json[QString("sComputedImageurl")].isNull() && m_s_computed_imageurl_isValid;
}

QString Ezsigntemplatedocumentpage_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatedocumentpage_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocumentpage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentpageID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatedocumentpage_id));
    }
    if (m_i_ezsigntemplatedocumentpage_widthimage_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageWidthimage"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpage_widthimage));
    }
    if (m_i_ezsigntemplatedocumentpage_heightimage_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageHeightimage"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpage_heightimage));
    }
    if (m_i_ezsigntemplatedocumentpage_widthpdf_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageWidthpdf"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpage_widthpdf));
    }
    if (m_i_ezsigntemplatedocumentpage_heightpdf_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageHeightpdf"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpage_heightpdf));
    }
    if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagePagenumber"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpage_pagenumber));
    }
    if (m_s_computed_imageurl_isSet) {
        obj.insert(QString("sComputedImageurl"), ::Ezmaxapi::toJsonValue(m_s_computed_imageurl));
    }
    return obj;
}

qint32 Ezsigntemplatedocumentpage_Response::getPkiEzsigntemplatedocumentpageId() const {
    return m_pki_ezsigntemplatedocumentpage_id;
}
void Ezsigntemplatedocumentpage_Response::setPkiEzsigntemplatedocumentpageId(const qint32 &pki_ezsigntemplatedocumentpage_id) {
    m_pki_ezsigntemplatedocumentpage_id = pki_ezsigntemplatedocumentpage_id;
    m_pki_ezsigntemplatedocumentpage_id_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_pki_ezsigntemplatedocumentpage_id_Set() const{
    return m_pki_ezsigntemplatedocumentpage_id_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_pki_ezsigntemplatedocumentpage_id_Valid() const{
    return m_pki_ezsigntemplatedocumentpage_id_isValid;
}

qint32 Ezsigntemplatedocumentpage_Response::getIEzsigntemplatedocumentpageWidthimage() const {
    return m_i_ezsigntemplatedocumentpage_widthimage;
}
void Ezsigntemplatedocumentpage_Response::setIEzsigntemplatedocumentpageWidthimage(const qint32 &i_ezsigntemplatedocumentpage_widthimage) {
    m_i_ezsigntemplatedocumentpage_widthimage = i_ezsigntemplatedocumentpage_widthimage;
    m_i_ezsigntemplatedocumentpage_widthimage_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_widthimage_Set() const{
    return m_i_ezsigntemplatedocumentpage_widthimage_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_widthimage_Valid() const{
    return m_i_ezsigntemplatedocumentpage_widthimage_isValid;
}

qint32 Ezsigntemplatedocumentpage_Response::getIEzsigntemplatedocumentpageHeightimage() const {
    return m_i_ezsigntemplatedocumentpage_heightimage;
}
void Ezsigntemplatedocumentpage_Response::setIEzsigntemplatedocumentpageHeightimage(const qint32 &i_ezsigntemplatedocumentpage_heightimage) {
    m_i_ezsigntemplatedocumentpage_heightimage = i_ezsigntemplatedocumentpage_heightimage;
    m_i_ezsigntemplatedocumentpage_heightimage_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_heightimage_Set() const{
    return m_i_ezsigntemplatedocumentpage_heightimage_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_heightimage_Valid() const{
    return m_i_ezsigntemplatedocumentpage_heightimage_isValid;
}

qint32 Ezsigntemplatedocumentpage_Response::getIEzsigntemplatedocumentpageWidthpdf() const {
    return m_i_ezsigntemplatedocumentpage_widthpdf;
}
void Ezsigntemplatedocumentpage_Response::setIEzsigntemplatedocumentpageWidthpdf(const qint32 &i_ezsigntemplatedocumentpage_widthpdf) {
    m_i_ezsigntemplatedocumentpage_widthpdf = i_ezsigntemplatedocumentpage_widthpdf;
    m_i_ezsigntemplatedocumentpage_widthpdf_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_widthpdf_Set() const{
    return m_i_ezsigntemplatedocumentpage_widthpdf_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_widthpdf_Valid() const{
    return m_i_ezsigntemplatedocumentpage_widthpdf_isValid;
}

qint32 Ezsigntemplatedocumentpage_Response::getIEzsigntemplatedocumentpageHeightpdf() const {
    return m_i_ezsigntemplatedocumentpage_heightpdf;
}
void Ezsigntemplatedocumentpage_Response::setIEzsigntemplatedocumentpageHeightpdf(const qint32 &i_ezsigntemplatedocumentpage_heightpdf) {
    m_i_ezsigntemplatedocumentpage_heightpdf = i_ezsigntemplatedocumentpage_heightpdf;
    m_i_ezsigntemplatedocumentpage_heightpdf_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_heightpdf_Set() const{
    return m_i_ezsigntemplatedocumentpage_heightpdf_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_heightpdf_Valid() const{
    return m_i_ezsigntemplatedocumentpage_heightpdf_isValid;
}

qint32 Ezsigntemplatedocumentpage_Response::getIEzsigntemplatedocumentpagePagenumber() const {
    return m_i_ezsigntemplatedocumentpage_pagenumber;
}
void Ezsigntemplatedocumentpage_Response::setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber) {
    m_i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_pagenumber_Set() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isValid;
}

QString Ezsigntemplatedocumentpage_Response::getSComputedImageurl() const {
    return m_s_computed_imageurl;
}
void Ezsigntemplatedocumentpage_Response::setSComputedImageurl(const QString &s_computed_imageurl) {
    m_s_computed_imageurl = s_computed_imageurl;
    m_s_computed_imageurl_isSet = true;
}

bool Ezsigntemplatedocumentpage_Response::is_s_computed_imageurl_Set() const{
    return m_s_computed_imageurl_isSet;
}

bool Ezsigntemplatedocumentpage_Response::is_s_computed_imageurl_Valid() const{
    return m_s_computed_imageurl_isValid;
}

bool Ezsigntemplatedocumentpage_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatedocumentpage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_widthimage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_heightimage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_widthpdf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_heightpdf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_computed_imageurl_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatedocumentpage_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatedocumentpage_id_isValid && m_i_ezsigntemplatedocumentpage_widthimage_isValid && m_i_ezsigntemplatedocumentpage_heightimage_isValid && m_i_ezsigntemplatedocumentpage_widthpdf_isValid && m_i_ezsigntemplatedocumentpage_heightpdf_isValid && m_i_ezsigntemplatedocumentpage_pagenumber_isValid && m_s_computed_imageurl_isValid && true;
}

} // namespace Ezmaxapi